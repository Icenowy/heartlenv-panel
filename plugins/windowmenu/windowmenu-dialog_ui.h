/* automatically generated from windowmenu-dialog.glade */
#ifdef __SUNPRO_C
#pragma align 4 (windowmenu_dialog_ui)
#endif
#ifdef __GNUC__
static const char windowmenu_dialog_ui[] __attribute__ ((__aligned__ (4))) =
#else
static const char windowmenu_dialog_ui[] =
#endif
{
  "<?xml version=\"1.0\"?><interface><requires lib=\"gtk+\" version=\"2.14"
  "\"/><object class=\"XfceTitledDialog\" id=\"dialog\"><property name=\"t"
  "itle\" translatable=\"yes\">Window Menu</property><property name=\"icon"
  "_name\">gtk-properties</property><property name=\"type_hint\">normal</p"
  "roperty><property name=\"has_separator\">False</property><child interna"
  "l-child=\"vbox\"><object class=\"GtkVBox\" id=\"dialog-vbox2\"><propert"
  "y name=\"visible\">True</property><property name=\"orientation\">vertic"
  "al</property><property name=\"spacing\">2</property><child><object clas"
  "s=\"GtkVBox\" id=\"vbox1\"><property name=\"visible\">True</property><p"
  "roperty name=\"border_width\">6</property><property name=\"orientation\""
  ">vertical</property><property name=\"spacing\">6</property><child><obje"
  "ct class=\"GtkFrame\" id=\"frame3\"><property name=\"visible\">True</pr"
  "operty><property name=\"label_xalign\">0</property><property name=\"sha"
  "dow_type\">none</property><child><object class=\"GtkAlignment\" id=\"al"
  "ignment3\"><property name=\"visible\">True</property><property name=\"l"
  "eft_padding\">12</property><child><object class=\"GtkVBox\" id=\"vbox3\""
  "><property name=\"visible\">True</property><property name=\"border_widt"
  "h\">6</property><property name=\"orientation\">vertical</property><prop"
  "erty name=\"spacing\">6</property><child><object class=\"GtkHBox\" id=\""
  "hbox1\"><property name=\"visible\">True</property><property name=\"spac"
  "ing\">12</property><child><object class=\"GtkLabel\" id=\"label5\"><pro"
  "perty name=\"visible\">True</property><property name=\"xalign\">0</prop"
  "erty><property name=\"label\" translatable=\"yes\">Button layout:</prop"
  "erty></object><packing><property name=\"expand\">False</property><prope"
  "rty name=\"position\">0</property></packing></child><child><object clas"
  "s=\"GtkComboBox\" id=\"style\"><property name=\"visible\">True</propert"
  "y><property name=\"model\">style-model</property><child><object class=\""
  "GtkCellRendererText\" id=\"cellrenderertext1\"/><attributes><attribute "
  "name=\"text\">0</attribute></attributes></child></object><packing><prop"
  "erty name=\"expand\">False</property><property name=\"position\">1</pro"
  "perty></packing></child></object><packing><property name=\"position\">0"
  "</property></packing></child><child><object class=\"GtkCheckButton\" id"
  "=\"workspace-actions\"><property name=\"label\" translatable=\"yes\">Sh"
  "ow workspace a_ctions</property><property name=\"visible\">True</proper"
  "ty><property name=\"can_focus\">True</property><property name=\"receive"
  "s_default\">False</property><property name=\"use_underline\">True</prop"
  "erty><property name=\"draw_indicator\">True</property></object><packing"
  "><property name=\"position\">1</property></packing></child><child><obje"
  "ct class=\"GtkCheckButton\" id=\"workspace-names\"><property name=\"lab"
  "el\" translatable=\"yes\">Show workspace _names</property><property nam"
  "e=\"visible\">True</property><property name=\"can_focus\">True</propert"
  "y><property name=\"receives_default\">False</property><property name=\""
  "use_underline\">True</property><property name=\"draw_indicator\">True</"
  "property></object><packing><property name=\"position\">2</property></pa"
  "cking></child><child><object class=\"GtkCheckButton\" id=\"urgentcy-not"
  "ification\"><property name=\"label\" translatable=\"yes\">Enable _urgen"
  "cy notification</property><property name=\"visible\">True</property><pr"
  "operty name=\"can_focus\">True</property><property name=\"receives_defa"
  "ult\">False</property><property name=\"use_underline\">True</property><"
  "property name=\"draw_indicator\">True</property></object><packing><prop"
  "erty name=\"position\">3</property></packing></child></object></child><"
  "/object></child><child type=\"label\"><object class=\"GtkLabel\" id=\"l"
  "abel1\"><property name=\"visible\">True</property><property name=\"labe"
  "l\" translatable=\"yes\">Appearance</property><attributes><attribute na"
  "me=\"weight\" value=\"bold\"/></attributes></object></child></object><p"
  "acking><property name=\"expand\">False</property><property name=\"posit"
  "ion\">0</property></packing></child><child><object class=\"GtkFrame\" i"
  "d=\"frame1\"><property name=\"visible\">True</property><property name=\""
  "label_xalign\">0</property><property name=\"shadow_type\">none</propert"
  "y><child><object class=\"GtkAlignment\" id=\"alignment1\"><property nam"
  "e=\"visible\">True</property><property name=\"left_padding\">12</proper"
  "ty><child><object class=\"GtkVBox\" id=\"vbox2\"><property name=\"visib"
  "le\">True</property><property name=\"border_width\">6</property><proper"
  "ty name=\"orientation\">vertical</property><property name=\"spacing\">6"
  "</property><child><object class=\"GtkCheckButton\" id=\"all-workspaces\""
  "><property name=\"label\" translatable=\"yes\">Show windows from _all w"
  "orkspaces</property><property name=\"visible\">True</property><property"
  " name=\"can_focus\">True</property><property name=\"receives_default\">"
  "False</property><property name=\"use_underline\">True</property><proper"
  "ty name=\"draw_indicator\">True</property></object><packing><property n"
  "ame=\"position\">0</property></packing></child></object></child></objec"
  "t></child><child type=\"label\"><object class=\"GtkLabel\" id=\"label3\""
  "><property name=\"visible\">True</property><property name=\"label\" tra"
  "nslatable=\"yes\">Filtering</property><attributes><attribute name=\"wei"
  "ght\" value=\"bold\"/></attributes></object></child></object><packing><"
  "property name=\"expand\">False</property><property name=\"position\">1<"
  "/property></packing></child></object><packing><property name=\"expand\""
  ">False</property><property name=\"position\">1</property></packing></ch"
  "ild><child internal-child=\"action_area\"><object class=\"GtkHButtonBox"
  "\" id=\"dialog-action_area2\"><property name=\"visible\">True</property"
  "><property name=\"layout_style\">end</property><child><object class=\"G"
  "tkButton\" id=\"close-button\"><property name=\"label\">gtk-close</prop"
  "erty><property name=\"visible\">True</property><property name=\"can_foc"
  "us\">True</property><property name=\"receives_default\">True</property>"
  "<property name=\"use_stock\">True</property></object><packing><property"
  " name=\"expand\">False</property><property name=\"fill\">False</propert"
  "y><property name=\"position\">0</property></packing></child><child><obj"
  "ect class=\"GtkButton\" id=\"help-button\"><property name=\"label\">gtk"
  "-help</property><property name=\"visible\">True</property><property nam"
  "e=\"can_focus\">True</property><property name=\"receives_default\">True"
  "</property><property name=\"use_stock\">True</property></object><packin"
  "g><property name=\"expand\">False</property><property name=\"fill\">Fal"
  "se</property><property name=\"position\">1</property><property name=\"s"
  "econdary\">True</property></packing></child></object><packing><property"
  " name=\"expand\">False</property><property name=\"pack_type\">end</prop"
  "erty><property name=\"position\">0</property></packing></child></object"
  "></child><action-widgets><action-widget response=\"0\">close-button</ac"
  "tion-widget><action-widget response=\"0\">help-button</action-widget></"
  "action-widgets></object><object class=\"GtkListStore\" id=\"style-model"
  "\"><columns><column type=\"gchararray\"/></columns><data><row><col id=\""
  "0\" translatable=\"yes\">Icon</col></row><row><col id=\"0\" translatabl"
  "e=\"yes\">Arrow</col></row></data></object></interface>"
};

static const unsigned windowmenu_dialog_ui_length = 6886u;

