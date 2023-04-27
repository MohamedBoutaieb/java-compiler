import dearpygui.dearpygui as dpg
import subprocess
dpg.create_context()


def compile_code(sender, data, user_data):

    text = dpg.get_value(user_data[0])
    # print(text)
    write_text_file(text)
    try:
        with open('code.txt', 'r') as f:
            result = subprocess.run(['x'], stdin=f, capture_output=True)
            if (len(result.stdout.decode('utf-8'))==0):
                 dpg.set_value(user_data[1], f"{result.stderr.decode('utf-8')}")
            else : 
                dpg.set_value(user_data[1], f"{result.stdout.decode('utf-8')}")
    except Exception as e:
        print(e)


def write_text_file(input_text):
    with open("code.txt", "w") as f:
        f.write(input_text)


with dpg.window(tag="Primary Window"):

    input_text = dpg.add_input_text(
        default_value="", width=500, height=500, multiline=True)
    print(input_text)
    dpg.set_item_pos(input_text, [50, 50])
    output_text = dpg.add_input_text(
        default_value="Output", width=500, height=500, multiline=True,readonly=True)
    dpg.set_item_pos(output_text, [700, 50])
    compile_button = dpg.add_button(
        label="Compile", width=100, height=50, callback=compile_code, user_data=[input_text, output_text])
    dpg.set_item_pos(compile_button, [250, 600])
dpg.create_viewport(title='Java Compiler', width=1280, height=720)
dpg.setup_dearpygui()
dpg.show_viewport()
dpg.set_primary_window("Primary Window", True)
dpg.start_dearpygui()
dpg.destroy_context()
