#include <gtk/gtk.h>

int main(int argc, char* argv[]) {
	gtk_init(&argc, &argv);
	GtkWidget* widget = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	gtk_widget_show(widget);
	g_signal_connect(widget, "destroy", G_CALLBACK(gtk_main_quit), NULL);
	gtk_main();
	return 0;
}