/* automatically generated from systray-dialog.glade */
#ifdef __SUNPRO_C
#pragma align 4 (systray_dialog_ui)
#endif
#ifdef __GNUC__
static const char systray_dialog_ui[] __attribute__ ((__aligned__ (4))) =
#else
static const char systray_dialog_ui[] =
#endif
{
  "<?xml version=\"1.0\"?><interface><requires lib=\"gtk+\" version=\"2.14"
  "\"/><object class=\"GtkListStore\" id=\"applications-store\"><columns><"
  "column type=\"GdkPixbuf\"/><column type=\"gchararray\"/><column type=\""
  "gboolean\"/><column type=\"gchararray\"/></columns></object><object cla"
  "ss=\"XfceTitledDialog\" id=\"dialog\"><property name=\"title\" translat"
  "able=\"yes\">Notification Area</property><property name=\"default_width"
  "\">325</property><property name=\"default_height\">425</property><prope"
  "rty name=\"icon_name\">gtk-properties</property><property name=\"type_h"
  "int\">normal</property><child internal-child=\"vbox\"><object class=\"G"
  "tkVBox\" id=\"dialog-vbox2\"><property name=\"visible\">True</property>"
  "<property name=\"orientation\">vertical</property><property name=\"spac"
  "ing\">2</property><child><object class=\"GtkVBox\" id=\"vbox1\"><proper"
  "ty name=\"visible\">True</property><property name=\"border_width\">6</p"
  "roperty><property name=\"orientation\">vertical</property><property nam"
  "e=\"spacing\">6</property><child><object class=\"GtkFrame\" id=\"frame3"
  "\"><property name=\"visible\">True</property><property name=\"label_xal"
  "ign\">0</property><property name=\"shadow_type\">none</property><child>"
  "<object class=\"GtkAlignment\" id=\"alignment3\"><property name=\"visib"
  "le\">True</property><property name=\"left_padding\">12</property><child"
  "><object class=\"GtkVBox\" id=\"vbox2\"><property name=\"visible\">True"
  "</property><property name=\"border_width\">6</property><property name=\""
  "orientation\">vertical</property><property name=\"spacing\">6</property"
  "><child><object class=\"GtkHBox\" id=\"hbox1\"><property name=\"visible"
  "\">True</property><property name=\"spacing\">12</property><child><objec"
  "t class=\"GtkLabel\" id=\"label2\"><property name=\"visible\">True</pro"
  "perty><property name=\"xalign\">0</property><property name=\"label\" tr"
  "anslatable=\"yes\">_Maximum icon size (px):</property><property name=\""
  "use_underline\">True</property><property name=\"mnemonic_widget\">size-"
  "max</property></object><packing><property name=\"expand\">False</proper"
  "ty><property name=\"position\">0</property></packing></child><child><ob"
  "ject class=\"GtkSpinButton\" id=\"size-max\"><property name=\"visible\""
  ">True</property><property name=\"can_focus\">True</property><property n"
  "ame=\"adjustment\">size-adjustment</property><property name=\"numeric\""
  ">True</property></object><packing><property name=\"expand\">False</prop"
  "erty><property name=\"position\">1</property></packing></child></object"
  "><packing><property name=\"position\">0</property></packing></child><ch"
  "ild><object class=\"GtkCheckButton\" id=\"show-frame\"><property name=\""
  "label\" translatable=\"yes\">Show _frame</property><property name=\"vis"
  "ible\">True</property><property name=\"can_focus\">True</property><prop"
  "erty name=\"receives_default\">False</property><property name=\"use_und"
  "erline\">True</property><property name=\"draw_indicator\">True</propert"
  "y></object><packing><property name=\"position\">1</property></packing><"
  "/child></object></child></object></child><child type=\"label\"><object "
  "class=\"GtkLabel\" id=\"label1\"><property name=\"visible\">True</prope"
  "rty><property name=\"label\" translatable=\"yes\">Appearance</property>"
  "<attributes><attribute name=\"weight\" value=\"bold\"/></attributes></o"
  "bject></child></object><packing><property name=\"expand\">False</proper"
  "ty><property name=\"position\">0</property></packing></child><child><ob"
  "ject class=\"GtkFrame\" id=\"frame1\"><property name=\"visible\">True</"
  "property><property name=\"label_xalign\">0</property><property name=\"s"
  "hadow_type\">none</property><child><object class=\"GtkAlignment\" id=\""
  "alignment1\"><property name=\"visible\">True</property><property name=\""
  "left_padding\">12</property><child><object class=\"GtkVBox\" id=\"vbox3"
  "\"><property name=\"visible\">True</property><property name=\"border_wi"
  "dth\">6</property><property name=\"orientation\">vertical</property><pr"
  "operty name=\"spacing\">6</property><child><object class=\"GtkScrolledW"
  "indow\" id=\"scrolledwindow1\"><property name=\"visible\">True</propert"
  "y><property name=\"can_focus\">True</property><property name=\"hscrollb"
  "ar_policy\">automatic</property><property name=\"vscrollbar_policy\">au"
  "tomatic</property><property name=\"shadow_type\">in</property><child><o"
  "bject class=\"GtkTreeView\" id=\"applications-treeview\"><property name"
  "=\"visible\">True</property><property name=\"can_focus\">True</property"
  "><property name=\"model\">applications-store</property><property name=\""
  "headers_clickable\">False</property><property name=\"rules_hint\">True<"
  "/property><property name=\"enable_search\">False</property><child><obje"
  "ct class=\"GtkTreeViewColumn\" id=\"treeviewcolumn1\"><property name=\""
  "min_width\">24</property><child><object class=\"GtkCellRendererPixbuf\""
  " id=\"cellrendererpixbuf1\"/><attributes><attribute name=\"pixbuf\">0</"
  "attribute></attributes></child></object></child><child><object class=\""
  "GtkTreeViewColumn\" id=\"treeviewcolumn2\"><property name=\"title\">App"
  "lication</property><property name=\"expand\">True</property><child><obj"
  "ect class=\"GtkCellRendererText\" id=\"cellrenderertext1\"/><attributes"
  "><attribute name=\"text\">1</attribute></attributes></child></object></"
  "child><child><object class=\"GtkTreeViewColumn\" id=\"treeviewcolumn3\""
  "><property name=\"title\">Hidden</property><child><object class=\"GtkCe"
  "llRendererToggle\" id=\"hidden-toggle\"/><attributes><attribute name=\""
  "active\">2</attribute></attributes></child></object></child></object></"
  "child></object><packing><property name=\"position\">0</property></packi"
  "ng></child><child><object class=\"GtkHButtonBox\" id=\"hbuttonbox1\"><p"
  "roperty name=\"visible\">True</property><property name=\"layout_style\""
  ">start</property><child><object class=\"GtkButton\" id=\"applications-c"
  "lear\"><property name=\"label\" translatable=\"yes\">C_lear Known Appli"
  "cations</property><property name=\"visible\">True</property><property n"
  "ame=\"can_focus\">True</property><property name=\"receives_default\">Tr"
  "ue</property><property name=\"image\">image1</property><property name=\""
  "use_underline\">True</property></object><packing><property name=\"expan"
  "d\">False</property><property name=\"fill\">False</property><property n"
  "ame=\"position\">0</property></packing></child></object><packing><prope"
  "rty name=\"expand\">False</property><property name=\"position\">1</prop"
  "erty></packing></child></object></child></object></child><child type=\""
  "label\"><object class=\"GtkLabel\" id=\"label3\"><property name=\"visib"
  "le\">True</property><property name=\"label\" translatable=\"yes\">Known"
  " Applications</property><attributes><attribute name=\"weight\" value=\""
  "bold\"/></attributes></object></child></object><packing><property name="
  "\"position\">1</property></packing></child></object><packing><property "
  "name=\"position\">1</property></packing></child><child internal-child=\""
  "action_area\"><object class=\"GtkHButtonBox\" id=\"dialog-action_area2\""
  "><property name=\"visible\">True</property><property name=\"layout_styl"
  "e\">end</property><child><object class=\"GtkButton\" id=\"close-button\""
  "><property name=\"label\">gtk-close</property><property name=\"visible\""
  ">True</property><property name=\"can_focus\">True</property><property n"
  "ame=\"receives_default\">True</property><property name=\"use_stock\">Tr"
  "ue</property></object><packing><property name=\"expand\">False</propert"
  "y><property name=\"fill\">False</property><property name=\"position\">0"
  "</property></packing></child><child><object class=\"GtkButton\" id=\"he"
  "lp-button\"><property name=\"label\">gtk-help</property><property name="
  "\"visible\">True</property><property name=\"can_focus\">True</property>"
  "<property name=\"receives_default\">True</property><property name=\"use"
  "_stock\">True</property></object><packing><property name=\"expand\">Fal"
  "se</property><property name=\"fill\">False</property><property name=\"p"
  "osition\">1</property><property name=\"secondary\">True</property></pac"
  "king></child></object><packing><property name=\"expand\">False</propert"
  "y><property name=\"pack_type\">end</property><property name=\"position\""
  ">0</property></packing></child></object></child><action-widgets><action"
  "-widget response=\"0\">close-button</action-widget><action-widget respo"
  "nse=\"0\">help-button</action-widget></action-widgets></object><object "
  "class=\"GtkAdjustment\" id=\"size-adjustment\"><property name=\"value\""
  ">32</property><property name=\"lower\">12</property><property name=\"up"
  "per\">64</property><property name=\"step_increment\">1</property><prope"
  "rty name=\"page_increment\">2</property></object><object class=\"GtkIma"
  "ge\" id=\"image1\"><property name=\"visible\">True</property><property "
  "name=\"stock\">gtk-clear</property></object></interface>"
};

static const unsigned systray_dialog_ui_length = 8243u;

