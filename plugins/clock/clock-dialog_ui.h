/* automatically generated from clock-dialog.glade */
#ifdef __SUNPRO_C
#pragma align 4 (clock_dialog_ui)
#endif
#ifdef __GNUC__
static const char clock_dialog_ui[] __attribute__ ((__aligned__ (4))) =
#else
static const char clock_dialog_ui[] =
#endif
{
  "<?xml version=\"1.0\"?><interface><requires lib=\"gtk+\" version=\"2.14"
  "\"/><object class=\"GtkAdjustment\" id=\"fuzziness\"><property name=\"u"
  "pper\">3</property><property name=\"step_increment\">1</property><prope"
  "rty name=\"page_increment\">1</property><property name=\"page_size\">1<"
  "/property></object><object class=\"XfceTitledDialog\" id=\"dialog\"><pr"
  "operty name=\"title\" translatable=\"yes\">Clock</property><property na"
  "me=\"icon_name\">gtk-properties</property><property name=\"type_hint\">"
  "normal</property><property name=\"has_separator\">False</property><chil"
  "d internal-child=\"vbox\"><object class=\"GtkVBox\" id=\"dialog-vbox2\""
  "><property name=\"visible\">True</property><property name=\"orientation"
  "\">vertical</property><property name=\"spacing\">2</property><child><ob"
  "ject class=\"GtkVBox\" id=\"vbox1\"><property name=\"visible\">True</pr"
  "operty><property name=\"border_width\">6</property><property name=\"ori"
  "entation\">vertical</property><property name=\"spacing\">6</property><c"
  "hild><object class=\"GtkFrame\" id=\"frame3\"><property name=\"visible\""
  ">True</property><property name=\"label_xalign\">0</property><property n"
  "ame=\"shadow_type\">none</property><child><object class=\"GtkAlignment\""
  " id=\"alignment3\"><property name=\"visible\">True</property><property "
  "name=\"left_padding\">12</property><child><object class=\"GtkTable\" id"
  "=\"table2\"><property name=\"visible\">True</property><property name=\""
  "border_width\">6</property><property name=\"n_rows\">4</property><prope"
  "rty name=\"n_columns\">2</property><property name=\"column_spacing\">12"
  "</property><property name=\"row_spacing\">6</property><child><object cl"
  "ass=\"GtkLabel\" id=\"label2\"><property name=\"visible\">True</propert"
  "y><property name=\"xalign\">0</property><property name=\"label\" transl"
  "atable=\"yes\">_Layout:</property><property name=\"use_underline\">True"
  "</property><property name=\"mnemonic_widget\">mode</property></object><"
  "packing><property name=\"x_options\">GTK_FILL</property></packing></chi"
  "ld><child><object class=\"GtkComboBox\" id=\"mode\"><property name=\"vi"
  "sible\">True</property><property name=\"model\">mode-model</property><c"
  "hild><object class=\"GtkCellRendererText\" id=\"cellrenderertext1\"/><a"
  "ttributes><attribute name=\"text\">0</attribute></attributes></child></"
  "object><packing><property name=\"left_attach\">1</property><property na"
  "me=\"right_attach\">2</property></packing></child><child><object class="
  "\"GtkLabel\" id=\"label4\"><property name=\"visible\">True</property><p"
  "roperty name=\"xalign\">0</property><property name=\"label\" translatab"
  "le=\"yes\">_Tooltip format:</property><property name=\"use_underline\">"
  "True</property></object><packing><property name=\"top_attach\">1</prope"
  "rty><property name=\"bottom_attach\">2</property><property name=\"x_opt"
  "ions\">GTK_FILL</property></packing></child><child><object class=\"GtkC"
  "omboBox\" id=\"tooltip-chooser\"><property name=\"visible\">True</prope"
  "rty><child><object class=\"GtkCellRendererText\" id=\"cellrenderertext2"
  "\"/><attributes><attribute name=\"text\">2</attribute></attributes></ch"
  "ild></object><packing><property name=\"left_attach\">1</property><prope"
  "rty name=\"right_attach\">2</property><property name=\"top_attach\">1</"
  "property><property name=\"bottom_attach\">2</property></packing></child"
  "><child><object class=\"GtkCheckButton\" id=\"show-frame\"><property na"
  "me=\"label\" translatable=\"yes\">Show _frame</property><property name="
  "\"visible\">True</property><property name=\"can_focus\">True</property>"
  "<property name=\"receives_default\">False</property><property name=\"us"
  "e_underline\">True</property><property name=\"draw_indicator\">True</pr"
  "operty></object><packing><property name=\"right_attach\">2</property><p"
  "roperty name=\"top_attach\">3</property><property name=\"bottom_attach\""
  ">4</property></packing></child><child><object class=\"GtkEntry\" id=\"t"
  "ooltip-format\"><property name=\"visible\">True</property><property nam"
  "e=\"can_focus\">True</property><property name=\"tooltip_text\" translat"
  "able=\"yes\">The format describes the date and time parts to insert int"
  "o the file name. For example, %Y will be substituted with the year, %m "
  "with the month and %d with the day. See the documentation of the date u"
  "tility for additional information.</property><property name=\"invisible"
  "_char\">&#x2022;</property></object><packing><property name=\"left_atta"
  "ch\">1</property><property name=\"right_attach\">2</property><property "
  "name=\"top_attach\">2</property><property name=\"bottom_attach\">3</pro"
  "perty></packing></child><child><placeholder/></child></object></child><"
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
  "</property><child><object class=\"GtkCheckButton\" id=\"show-seconds\">"
  "<property name=\"label\" translatable=\"yes\">Display _seconds</propert"
  "y><property name=\"visible\">True</property><property name=\"can_focus\""
  ">True</property><property name=\"receives_default\">False</property><pr"
  "operty name=\"use_underline\">True</property><property name=\"draw_indi"
  "cator\">True</property></object><packing><property name=\"position\">0<"
  "/property></packing></child><child><object class=\"GtkCheckButton\" id="
  "\"true-binary\"><property name=\"label\" translatable=\"yes\">True _bin"
  "ary clock</property><property name=\"visible\">True</property><property"
  " name=\"can_focus\">True</property><property name=\"receives_default\">"
  "False</property><property name=\"use_underline\">True</property><proper"
  "ty name=\"draw_indicator\">True</property></object><packing><property n"
  "ame=\"position\">1</property></packing></child><child><object class=\"G"
  "tkCheckButton\" id=\"show-military\"><property name=\"label\" translata"
  "ble=\"yes\">24-_hour clock</property><property name=\"visible\">True</p"
  "roperty><property name=\"can_focus\">True</property><property name=\"re"
  "ceives_default\">False</property><property name=\"use_underline\">True<"
  "/property><property name=\"draw_indicator\">True</property></object><pa"
  "cking><property name=\"position\">2</property></packing></child><child>"
  "<object class=\"GtkCheckButton\" id=\"flash-separators\"><property name"
  "=\"label\" translatable=\"yes\">Fl_ash time separators</property><prope"
  "rty name=\"visible\">True</property><property name=\"can_focus\">True</"
  "property><property name=\"receives_default\">False</property><property "
  "name=\"use_underline\">True</property><property name=\"draw_indicator\""
  ">True</property></object><packing><property name=\"position\">3</proper"
  "ty></packing></child><child><object class=\"GtkCheckButton\" id=\"show-"
  "meridiem\"><property name=\"label\" translatable=\"yes\">Sho_w AM/PM</p"
  "roperty><property name=\"visible\">True</property><property name=\"can_"
  "focus\">True</property><property name=\"receives_default\">False</prope"
  "rty><property name=\"use_underline\">True</property><property name=\"dr"
  "aw_indicator\">True</property></object><packing><property name=\"positi"
  "on\">4</property></packing></child><child><object class=\"GtkTable\" id"
  "=\"digital-box\"><property name=\"visible\">True</property><property na"
  "me=\"n_rows\">2</property><property name=\"n_columns\">2</property><pro"
  "perty name=\"column_spacing\">12</property><property name=\"row_spacing"
  "\">6</property><child><object class=\"GtkLabel\" id=\"label8\"><propert"
  "y name=\"visible\">True</property><property name=\"label\" translatable"
  "=\"yes\">F_ormat:</property><property name=\"use_underline\">True</prop"
  "erty><property name=\"mnemonic_widget\">digital-chooser</property></obj"
  "ect><packing><property name=\"x_options\">GTK_FILL</property></packing>"
  "</child><child><object class=\"GtkComboBox\" id=\"digital-chooser\"><pr"
  "operty name=\"visible\">True</property><child><object class=\"GtkCellRe"
  "ndererText\" id=\"cellrenderertext3\"/><attributes><attribute name=\"te"
  "xt\">2</attribute></attributes></child></object><packing><property name"
  "=\"left_attach\">1</property><property name=\"right_attach\">2</propert"
  "y></packing></child><child><object class=\"GtkEntry\" id=\"digital-form"
  "at\"><property name=\"visible\">True</property><property name=\"can_foc"
  "us\">True</property><property name=\"tooltip_text\" translatable=\"yes\""
  ">The format describes the date and time parts to insert into the file n"
  "ame. For example, %Y will be substituted with the year, %m with the mon"
  "th and %d with the day. See the documentation of the date utility for a"
  "dditional information.</property><property name=\"invisible_char\">&#x2"
  "022;</property></object><packing><property name=\"left_attach\">1</prop"
  "erty><property name=\"right_attach\">2</property><property name=\"top_a"
  "ttach\">1</property><property name=\"bottom_attach\">2</property></pack"
  "ing></child><child><placeholder/></child></object><packing><property na"
  "me=\"position\">5</property></packing></child><child><object class=\"Gt"
  "kHBox\" id=\"fuzziness-box\"><property name=\"visible\">True</property>"
  "<property name=\"spacing\">12</property><child><object class=\"GtkLabel"
  "\" id=\"label5\"><property name=\"visible\">True</property><property na"
  "me=\"label\" translatable=\"yes\" comments=\"I18N: the fuzziness the *p"
  "recision* of the fuzzy clock. Time steps of 5, 15 or parts of the day.\""
  ">F_uzziness:</property><property name=\"use_underline\">True</property>"
  "<property name=\"mnemonic_widget\">hscale1</property></object><packing>"
  "<property name=\"expand\">False</property><property name=\"position\">0"
  "</property></packing></child><child><object class=\"GtkHScale\" id=\"hs"
  "cale1\"><property name=\"visible\">True</property><property name=\"can_"
  "focus\">True</property><property name=\"update_policy\">delayed</proper"
  "ty><property name=\"adjustment\">fuzziness</property><property name=\"d"
  "igits\">0</property><property name=\"value_pos\">right</property></obje"
  "ct><packing><property name=\"position\">1</property></packing></child><"
  "/object><packing><property name=\"position\">6</property></packing></ch"
  "ild><child><object class=\"GtkCheckButton\" id=\"show-inactive\"><prope"
  "rty name=\"label\" translatable=\"yes\">Show _inactive dots</property><"
  "property name=\"visible\">True</property><property name=\"can_focus\">T"
  "rue</property><property name=\"receives_default\">False</property><prop"
  "erty name=\"use_underline\">True</property><property name=\"draw_indica"
  "tor\">True</property></object><packing><property name=\"position\">7</p"
  "roperty></packing></child><child><object class=\"GtkCheckButton\" id=\""
  "show-grid\"><property name=\"label\" translatable=\"yes\">Show gri_d</p"
  "roperty><property name=\"visible\">True</property><property name=\"can_"
  "focus\">True</property><property name=\"receives_default\">False</prope"
  "rty><property name=\"use_underline\">True</property><property name=\"dr"
  "aw_indicator\">True</property></object><packing><property name=\"positi"
  "on\">8</property></packing></child></object></child></object></child><c"
  "hild type=\"label\"><object class=\"GtkLabel\" id=\"label3\"><property "
  "name=\"visible\">True</property><property name=\"label\" translatable=\""
  "yes\">Clock Options</property><attributes><attribute name=\"weight\" va"
  "lue=\"bold\"/></attributes></object></child></object><packing><property"
  " name=\"expand\">False</property><property name=\"position\">1</propert"
  "y></packing></child></object><packing><property name=\"position\">1</pr"
  "operty></packing></child><child internal-child=\"action_area\"><object "
  "class=\"GtkHButtonBox\" id=\"dialog-action_area2\"><property name=\"vis"
  "ible\">True</property><property name=\"layout_style\">end</property><ch"
  "ild><object class=\"GtkButton\" id=\"close-button\"><property name=\"la"
  "bel\">gtk-close</property><property name=\"visible\">True</property><pr"
  "operty name=\"can_focus\">True</property><property name=\"receives_defa"
  "ult\">True</property><property name=\"use_stock\">True</property></obje"
  "ct><packing><property name=\"expand\">False</property><property name=\""
  "fill\">False</property><property name=\"position\">0</property></packin"
  "g></child><child><object class=\"GtkButton\" id=\"help-button\"><proper"
  "ty name=\"label\">gtk-help</property><property name=\"visible\">True</p"
  "roperty><property name=\"can_focus\">True</property><property name=\"re"
  "ceives_default\">True</property><property name=\"use_stock\">True</prop"
  "erty></object><packing><property name=\"expand\">False</property><prope"
  "rty name=\"fill\">False</property><property name=\"position\">1</proper"
  "ty><property name=\"secondary\">True</property></packing></child></obje"
  "ct><packing><property name=\"expand\">False</property><property name=\""
  "pack_type\">end</property><property name=\"position\">0</property></pac"
  "king></child></object></child><action-widgets><action-widget response=\""
  "0\">close-button</action-widget><action-widget response=\"0\">help-butt"
  "on</action-widget></action-widgets></object><object class=\"GtkListStor"
  "e\" id=\"mode-model\"><columns><column type=\"gchararray\"/></columns><"
  "data><row><col id=\"0\" translatable=\"yes\">Analog</col></row><row><co"
  "l id=\"0\" translatable=\"yes\">Binary</col></row><row><col id=\"0\" tr"
  "anslatable=\"yes\">Digital</col></row><row><col id=\"0\" translatable=\""
  "yes\">Fuzzy</col></row><row><col id=\"0\" translatable=\"yes\">LCD</col"
  "></row></data></object></interface>"
};

static const unsigned clock_dialog_ui_length = 13189u;
