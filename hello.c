#include <gtk-3.0/gtk/gtk.h>

int main(int argc, char *argv[]){

    GtkWidget *window;

    gtk_init (&argc, &argv);

    window = gtk_window_new (GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title (GTK_WINDOW (window), "Hello World");
    gtk_widget_show  (window);

    GtkWidget *gtk_list_box_new (void);

    gtk_main ();

    return 0;

}
