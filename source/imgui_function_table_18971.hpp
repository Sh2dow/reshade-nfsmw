/*
 * Copyright (C) 2021 Patrick Mours
 * Copyright (C) 2014-2023 Omar Cornut
 * SPDX-License-Identifier: BSD-3-Clause OR MIT
 */

#pragma once

#include "imgui_function_table_19000.hpp"

using imgui_font_18971 = imgui_font_19000;

using imgui_storage_18971 = imgui_storage_19000;

using imgui_list_clipper_18971 = imgui_list_clipper_19000;

using imgui_draw_list_18971 = imgui_draw_list_19000;

struct imgui_io_18971
{
	ImGuiConfigFlags ConfigFlags;
	ImGuiBackendFlags BackendFlags;
	ImVec2 DisplaySize;
	float DeltaTime;
	float IniSavingRate;
	const char *IniFilename;
	const char *LogFilename;
	void *UserData;

	ImFontAtlas *Fonts;
	float FontGlobalScale;
	bool FontAllowUserScaling;
	imgui_font_18971 *FontDefault;
	ImVec2 DisplayFramebufferScale;

	bool ConfigDockingNoSplit;
	bool ConfigDockingWithShift;
	bool ConfigDockingAlwaysTabBar;
	bool ConfigDockingTransparentPayload;

	bool ConfigViewportsNoAutoMerge;
	bool ConfigViewportsNoTaskBarIcon;
	bool ConfigViewportsNoDecoration;
	bool ConfigViewportsNoDefaultParent;

	bool MouseDrawCursor;
	bool ConfigMacOSXBehaviors;
	bool ConfigInputTrickleEventQueue;
	bool ConfigInputTextCursorBlink;
	bool ConfigInputTextEnterKeepActive;
	bool ConfigDragClickToInputText;
	bool ConfigWindowsResizeFromEdges;
	bool ConfigWindowsMoveFromTitleBarOnly;
	float ConfigMemoryCompactTimer;

	float MouseDoubleClickTime;
	float MouseDoubleClickMaxDist;
	float MouseDragThreshold;
	float KeyRepeatDelay;
	float KeyRepeatRate;

	bool ConfigDebugBeginReturnValueOnce;
	bool ConfigDebugBeginReturnValueLoop;
	bool ConfigDebugIgnoreFocusLoss;
	bool ConfigDebugIniSettings;

	const char *BackendPlatformName;
	const char *BackendRendererName;
	void *BackendPlatformUserData;
	void *BackendRendererUserData;
	void *BackendLanguageUserData;

	const char *(*GetClipboardTextFn)(void *user_data);
	void (*SetClipboardTextFn)(void *user_data, const char *text);
	void *ClipboardUserData;
	void (*SetPlatformImeDataFn)(ImGuiViewport *viewport, ImGuiPlatformImeData *data);
	void *ImeWindowHandle;

	bool WantCaptureMouse;
	bool WantCaptureKeyboard;
	bool WantTextInput;
	bool WantSetMousePos;
	bool WantSaveIniSettings;
	bool NavActive;
	bool NavVisible;
	float Framerate;
	int MetricsRenderVertices;
	int MetricsRenderIndices;
	int MetricsRenderWindows;
	int MetricsActiveWindows;
	int MetricsActiveAllocations;
	ImVec2 MouseDelta;

	int KeyMap[652];
	bool KeysDown[652];
	float NavInputs[16];
	void *Ctx;
	ImVec2 MousePos;
	bool MouseDown[5];
	float MouseWheel;
	float MouseWheelH;
	ImGuiMouseSource MouseSource;
	ImGuiID MouseHoveredViewport;
	bool KeyCtrl;
	bool KeyShift;
	bool KeyAlt;
	bool KeySuper;
	ImGuiKeyChord KeyMods;
	ImGuiKeyData KeysData[652];
	bool WantCaptureMouseUnlessPopupClose;
	ImVec2 MousePosPrev;
	ImVec2 MouseClickedPos[5];
	double MouseClickedTime[5];
	bool MouseClicked[5];
	bool MouseDoubleClicked[5];
	ImU16 MouseClickedCount[5];
	ImU16 MouseClickedLastCount[5];
	bool MouseReleased[5];
	bool MouseDownOwned[5];
	bool MouseDownOwnedUnlessPopupClose[5];
	bool MouseWheelRequestAxisSwap;
	float MouseDownDuration[5];
	float MouseDownDurationPrev[5];
	ImVec2 MouseDragMaxDistanceAbs[5];
	float MouseDragMaxDistanceSqr[5];
	float PenPressure;
	bool AppFocusLost;
	bool AppAcceptingEvents;
	ImS8 BackendUsingLegacyKeyArrays;
	bool BackendUsingLegacyNavInputArray;
	ImWchar16 InputQueueSurrogate;
	ImVector<ImWchar> InputQueueCharacters;
};

struct imgui_style_18971
{
	float Alpha;
	float DisabledAlpha;
	ImVec2 WindowPadding;
	float WindowRounding;
	float WindowBorderSize;
	ImVec2 WindowMinSize;
	ImVec2 WindowTitleAlign;
	ImGuiDir WindowMenuButtonPosition;
	float ChildRounding;
	float ChildBorderSize;
	float PopupRounding;
	float PopupBorderSize;
	ImVec2 FramePadding;
	float FrameRounding;
	float FrameBorderSize;
	ImVec2 ItemSpacing;
	ImVec2 ItemInnerSpacing;
	ImVec2 CellPadding;
	ImVec2 TouchExtraPadding;
	float IndentSpacing;
	float ColumnsMinSpacing;
	float ScrollbarSize;
	float ScrollbarRounding;
	float GrabMinSize;
	float GrabRounding;
	float LogSliderDeadzone;
	float TabRounding;
	float TabBorderSize;
	float TabMinWidthForCloseButton;
	ImGuiDir ColorButtonPosition;
	ImVec2 ButtonTextAlign;
	ImVec2 SelectableTextAlign;
	float SeparatorTextBorderSize;
	ImVec2 SeparatorTextAlign;
	ImVec2 SeparatorTextPadding;
	ImVec2 DisplayWindowPadding;
	ImVec2 DisplaySafeAreaPadding;
	float MouseCursorScale;
	bool AntiAliasedLines;
	bool AntiAliasedLinesUseTex;
	bool AntiAliasedFill;
	float CurveTessellationTol;
	float CircleTessellationMaxError;
	ImVec4 Colors[55];
	float HoverStationaryDelay;
	float HoverDelayShort;
	float HoverDelayNormal;
	ImGuiHoveredFlags HoverFlagsForTooltipMouse;
	ImGuiHoveredFlags HoverFlagsForTooltipNav;
};

struct imgui_function_table_18971
{
	imgui_io_18971 &(*GetIO)();
	imgui_style_18971 &(*GetStyle)();
	const char *(*GetVersion)();
	bool(*Begin)(const char *name, bool *p_open, ImGuiWindowFlags flags);
	void(*End)();
	bool(*BeginChild)(const char *str_id, const ImVec2 &size, bool border, ImGuiWindowFlags flags);
	bool(*BeginChild2)(ImGuiID id, const ImVec2 &size, bool border, ImGuiWindowFlags flags);
	void(*EndChild)();
	bool(*IsWindowAppearing)();
	bool(*IsWindowCollapsed)();
	bool(*IsWindowFocused)(ImGuiFocusedFlags flags);
	bool(*IsWindowHovered)(ImGuiHoveredFlags flags);
	imgui_draw_list_18971 *(*GetWindowDrawList)();
	float(*GetWindowDpiScale)();
	ImVec2(*GetWindowPos)();
	ImVec2(*GetWindowSize)();
	float(*GetWindowWidth)();
	float(*GetWindowHeight)();
	void(*SetNextWindowPos)(const ImVec2 &pos, ImGuiCond cond, const ImVec2 &pivot);
	void(*SetNextWindowSize)(const ImVec2 &size, ImGuiCond cond);
	void(*SetNextWindowSizeConstraints)(const ImVec2 &size_min, const ImVec2 &size_max, ImGuiSizeCallback custom_callback, void *custom_callback_data);
	void(*SetNextWindowContentSize)(const ImVec2 &size);
	void(*SetNextWindowCollapsed)(bool collapsed, ImGuiCond cond);
	void(*SetNextWindowFocus)();
	void(*SetNextWindowScroll)(const ImVec2 &scroll);
	void(*SetNextWindowBgAlpha)(float alpha);
	void(*SetWindowPos)(const ImVec2 &pos, ImGuiCond cond);
	void(*SetWindowSize)(const ImVec2 &size, ImGuiCond cond);
	void(*SetWindowCollapsed)(bool collapsed, ImGuiCond cond);
	void(*SetWindowFocus)();
	void(*SetWindowFontScale)(float scale);
	void(*SetWindowPos2)(const char *name, const ImVec2 &pos, ImGuiCond cond);
	void(*SetWindowSize2)(const char *name, const ImVec2 &size, ImGuiCond cond);
	void(*SetWindowCollapsed2)(const char *name, bool collapsed, ImGuiCond cond);
	void(*SetWindowFocus2)(const char *name);
	ImVec2(*GetContentRegionAvail)();
	ImVec2(*GetContentRegionMax)();
	ImVec2(*GetWindowContentRegionMin)();
	ImVec2(*GetWindowContentRegionMax)();
	float(*GetScrollX)();
	float(*GetScrollY)();
	void(*SetScrollX)(float scroll_x);
	void(*SetScrollY)(float scroll_y);
	float(*GetScrollMaxX)();
	float(*GetScrollMaxY)();
	void(*SetScrollHereX)(float center_x_ratio);
	void(*SetScrollHereY)(float center_y_ratio);
	void(*SetScrollFromPosX)(float local_x, float center_x_ratio);
	void(*SetScrollFromPosY)(float local_y, float center_y_ratio);
	void(*PushFont)(imgui_font_18971 *font);
	void(*PopFont)();
	void(*PushStyleColor)(ImGuiCol idx, ImU32 col);
	void(*PushStyleColor2)(ImGuiCol idx, const ImVec4 &col);
	void(*PopStyleColor)(int count);
	void(*PushStyleVar)(ImGuiStyleVar idx, float val);
	void(*PushStyleVar2)(ImGuiStyleVar idx, const ImVec2 &val);
	void(*PopStyleVar)(int count);
	void(*PushTabStop)(bool tab_stop);
	void(*PopTabStop)();
	void(*PushButtonRepeat)(bool repeat);
	void(*PopButtonRepeat)();
	void(*PushItemWidth)(float item_width);
	void(*PopItemWidth)();
	void(*SetNextItemWidth)(float item_width);
	float(*CalcItemWidth)();
	void(*PushTextWrapPos)(float wrap_local_pos_x);
	void(*PopTextWrapPos)();
	imgui_font_18971 *(*GetFont)();
	float(*GetFontSize)();
	ImVec2(*GetFontTexUvWhitePixel)();
	ImU32(*GetColorU32)(ImGuiCol idx, float alpha_mul);
	ImU32(*GetColorU322)(const ImVec4 &col);
	ImU32(*GetColorU323)(ImU32 col);
	const ImVec4 &(*GetStyleColorVec4)(ImGuiCol idx);
	void(*Separator)();
	void(*SameLine)(float offset_from_start_x, float spacing);
	void(*NewLine)();
	void(*Spacing)();
	void(*Dummy)(const ImVec2 &size);
	void(*Indent)(float indent_w);
	void(*Unindent)(float indent_w);
	void(*BeginGroup)();
	void(*EndGroup)();
	ImVec2(*GetCursorPos)();
	float(*GetCursorPosX)();
	float(*GetCursorPosY)();
	void(*SetCursorPos)(const ImVec2 &local_pos);
	void(*SetCursorPosX)(float local_x);
	void(*SetCursorPosY)(float local_y);
	ImVec2(*GetCursorStartPos)();
	ImVec2(*GetCursorScreenPos)();
	void(*SetCursorScreenPos)(const ImVec2 &pos);
	void(*AlignTextToFramePadding)();
	float(*GetTextLineHeight)();
	float(*GetTextLineHeightWithSpacing)();
	float(*GetFrameHeight)();
	float(*GetFrameHeightWithSpacing)();
	void(*PushID)(const char *str_id);
	void(*PushID2)(const char *str_id_begin, const char *str_id_end);
	void(*PushID3)(const void *ptr_id);
	void(*PushID4)(int int_id);
	void(*PopID)();
	ImGuiID(*GetID)(const char *str_id);
	ImGuiID(*GetID2)(const char *str_id_begin, const char *str_id_end);
	ImGuiID(*GetID3)(const void *ptr_id);
	void(*TextUnformatted)(const char *text, const char *text_end);
	void(*TextV)(const char *fmt, va_list args);
	void(*TextColoredV)(const ImVec4 &col, const char *fmt, va_list args);
	void(*TextDisabledV)(const char *fmt, va_list args);
	void(*TextWrappedV)(const char *fmt, va_list args);
	void(*LabelTextV)(const char *label, const char *fmt, va_list args);
	void(*BulletTextV)(const char *fmt, va_list args);
	void(*SeparatorText)(const char *label);
	bool(*Button)(const char *label, const ImVec2 &size);
	bool(*SmallButton)(const char *label);
	bool(*InvisibleButton)(const char *str_id, const ImVec2 &size, ImGuiButtonFlags flags);
	bool(*ArrowButton)(const char *str_id, ImGuiDir dir);
	bool(*Checkbox)(const char *label, bool *v);
	bool(*CheckboxFlags)(const char *label, int *flags, int flags_value);
	bool(*CheckboxFlags2)(const char *label, unsigned int *flags, unsigned int flags_value);
	bool(*RadioButton)(const char *label, bool active);
	bool(*RadioButton2)(const char *label, int *v, int v_button);
	void(*ProgressBar)(float fraction, const ImVec2 &size_arg, const char *overlay);
	void(*Bullet)();
	void(*Image)(ImTextureID user_texture_id, const ImVec2 &size, const ImVec2 &uv0, const ImVec2 &uv1, const ImVec4 &tint_col, const ImVec4 &border_col);
	bool(*ImageButton)(const char *str_id, ImTextureID user_texture_id, const ImVec2 &size, const ImVec2 &uv0, const ImVec2 &uv1, const ImVec4 &bg_col, const ImVec4 &tint_col);
	bool(*BeginCombo)(const char *label, const char *preview_value, ImGuiComboFlags flags);
	void(*EndCombo)();
	bool(*Combo)(const char *label, int *current_item, const char *const items[], int items_count, int popup_max_height_in_items);
	bool(*Combo2)(const char *label, int *current_item, const char *items_separated_by_zeros, int popup_max_height_in_items);
	bool(*Combo3)(const char *label, int *current_item, bool(*items_getter)(void *data, int idx, const char **out_text), void *data, int items_count, int popup_max_height_in_items);
	bool(*DragFloat)(const char *label, float *v, float v_speed, float v_min, float v_max, const char *format, ImGuiSliderFlags flags);
	bool(*DragFloat2)(const char *label, float v[2], float v_speed, float v_min, float v_max, const char *format, ImGuiSliderFlags flags);
	bool(*DragFloat3)(const char *label, float v[3], float v_speed, float v_min, float v_max, const char *format, ImGuiSliderFlags flags);
	bool(*DragFloat4)(const char *label, float v[4], float v_speed, float v_min, float v_max, const char *format, ImGuiSliderFlags flags);
	bool(*DragFloatRange2)(const char *label, float *v_current_min, float *v_current_max, float v_speed, float v_min, float v_max, const char *format, const char *format_max, ImGuiSliderFlags flags);
	bool(*DragInt)(const char *label, int *v, float v_speed, int v_min, int v_max, const char *format, ImGuiSliderFlags flags);
	bool(*DragInt2)(const char *label, int v[2], float v_speed, int v_min, int v_max, const char *format, ImGuiSliderFlags flags);
	bool(*DragInt3)(const char *label, int v[3], float v_speed, int v_min, int v_max, const char *format, ImGuiSliderFlags flags);
	bool(*DragInt4)(const char *label, int v[4], float v_speed, int v_min, int v_max, const char *format, ImGuiSliderFlags flags);
	bool(*DragIntRange2)(const char *label, int *v_current_min, int *v_current_max, float v_speed, int v_min, int v_max, const char *format, const char *format_max, ImGuiSliderFlags flags);
	bool(*DragScalar)(const char *label, ImGuiDataType data_type, void *p_data, float v_speed, const void *p_min, const void *p_max, const char *format, ImGuiSliderFlags flags);
	bool(*DragScalarN)(const char *label, ImGuiDataType data_type, void *p_data, int components, float v_speed, const void *p_min, const void *p_max, const char *format, ImGuiSliderFlags flags);
	bool(*SliderFloat)(const char *label, float *v, float v_min, float v_max, const char *format, ImGuiSliderFlags flags);
	bool(*SliderFloat2)(const char *label, float v[2], float v_min, float v_max, const char *format, ImGuiSliderFlags flags);
	bool(*SliderFloat3)(const char *label, float v[3], float v_min, float v_max, const char *format, ImGuiSliderFlags flags);
	bool(*SliderFloat4)(const char *label, float v[4], float v_min, float v_max, const char *format, ImGuiSliderFlags flags);
	bool(*SliderAngle)(const char *label, float *v_rad, float v_degrees_min, float v_degrees_max, const char *format, ImGuiSliderFlags flags);
	bool(*SliderInt)(const char *label, int *v, int v_min, int v_max, const char *format, ImGuiSliderFlags flags);
	bool(*SliderInt2)(const char *label, int v[2], int v_min, int v_max, const char *format, ImGuiSliderFlags flags);
	bool(*SliderInt3)(const char *label, int v[3], int v_min, int v_max, const char *format, ImGuiSliderFlags flags);
	bool(*SliderInt4)(const char *label, int v[4], int v_min, int v_max, const char *format, ImGuiSliderFlags flags);
	bool(*SliderScalar)(const char *label, ImGuiDataType data_type, void *p_data, const void *p_min, const void *p_max, const char *format, ImGuiSliderFlags flags);
	bool(*SliderScalarN)(const char *label, ImGuiDataType data_type, void *p_data, int components, const void *p_min, const void *p_max, const char *format, ImGuiSliderFlags flags);
	bool(*VSliderFloat)(const char *label, const ImVec2 &size, float *v, float v_min, float v_max, const char *format, ImGuiSliderFlags flags);
	bool(*VSliderInt)(const char *label, const ImVec2 &size, int *v, int v_min, int v_max, const char *format, ImGuiSliderFlags flags);
	bool(*VSliderScalar)(const char *label, const ImVec2 &size, ImGuiDataType data_type, void *p_data, const void *p_min, const void *p_max, const char *format, ImGuiSliderFlags flags);
	bool(*InputText)(const char *label, char *buf, size_t buf_size, ImGuiInputTextFlags flags, ImGuiInputTextCallback callback, void *user_data);
	bool(*InputTextMultiline)(const char *label, char *buf, size_t buf_size, const ImVec2 &size, ImGuiInputTextFlags flags, ImGuiInputTextCallback callback, void *user_data);
	bool(*InputTextWithHint)(const char *label, const char *hint, char *buf, size_t buf_size, ImGuiInputTextFlags flags, ImGuiInputTextCallback callback, void *user_data);
	bool(*InputFloat)(const char *label, float *v, float step, float step_fast, const char *format, ImGuiInputTextFlags flags);
	bool(*InputFloat2)(const char *label, float v[2], const char *format, ImGuiInputTextFlags flags);
	bool(*InputFloat3)(const char *label, float v[3], const char *format, ImGuiInputTextFlags flags);
	bool(*InputFloat4)(const char *label, float v[4], const char *format, ImGuiInputTextFlags flags);
	bool(*InputInt)(const char *label, int *v, int step, int step_fast, ImGuiInputTextFlags flags);
	bool(*InputInt2)(const char *label, int v[2], ImGuiInputTextFlags flags);
	bool(*InputInt3)(const char *label, int v[3], ImGuiInputTextFlags flags);
	bool(*InputInt4)(const char *label, int v[4], ImGuiInputTextFlags flags);
	bool(*InputDouble)(const char *label, double *v, double step, double step_fast, const char *format, ImGuiInputTextFlags flags);
	bool(*InputScalar)(const char *label, ImGuiDataType data_type, void *p_data, const void *p_step, const void *p_step_fast, const char *format, ImGuiInputTextFlags flags);
	bool(*InputScalarN)(const char *label, ImGuiDataType data_type, void *p_data, int components, const void *p_step, const void *p_step_fast, const char *format, ImGuiInputTextFlags flags);
	bool(*ColorEdit3)(const char *label, float col[3], ImGuiColorEditFlags flags);
	bool(*ColorEdit4)(const char *label, float col[4], ImGuiColorEditFlags flags);
	bool(*ColorPicker3)(const char *label, float col[3], ImGuiColorEditFlags flags);
	bool(*ColorPicker4)(const char *label, float col[4], ImGuiColorEditFlags flags, const float *ref_col);
	bool(*ColorButton)(const char *desc_id, const ImVec4 &col, ImGuiColorEditFlags flags, const ImVec2 &size);
	void(*SetColorEditOptions)(ImGuiColorEditFlags flags);
	bool(*TreeNode)(const char *label);
	bool(*TreeNodeV)(const char *str_id, const char *fmt, va_list args);
	bool(*TreeNodeV2)(const void *ptr_id, const char *fmt, va_list args);
	bool(*TreeNodeEx)(const char *label, ImGuiTreeNodeFlags flags);
	bool(*TreeNodeExV)(const char *str_id, ImGuiTreeNodeFlags flags, const char *fmt, va_list args);
	bool(*TreeNodeExV2)(const void *ptr_id, ImGuiTreeNodeFlags flags, const char *fmt, va_list args);
	void(*TreePush)(const char *str_id);
	void(*TreePush2)(const void *ptr_id);
	void(*TreePop)();
	float(*GetTreeNodeToLabelSpacing)();
	bool(*CollapsingHeader)(const char *label, ImGuiTreeNodeFlags flags);
	bool(*CollapsingHeader2)(const char *label, bool *p_visible, ImGuiTreeNodeFlags flags);
	void(*SetNextItemOpen)(bool is_open, ImGuiCond cond);
	bool(*Selectable)(const char *label, bool selected, ImGuiSelectableFlags flags, const ImVec2 &size);
	bool(*Selectable2)(const char *label, bool *p_selected, ImGuiSelectableFlags flags, const ImVec2 &size);
	bool(*BeginListBox)(const char *label, const ImVec2 &size);
	void(*EndListBox)();
	bool(*ListBox)(const char *label, int *current_item, const char *const items[], int items_count, int height_in_items);
	bool(*ListBox2)(const char *label, int *current_item, bool(*items_getter)(void *data, int idx, const char **out_text), void *data, int items_count, int height_in_items);
	void(*PlotLines)(const char *label, const float *values, int values_count, int values_offset, const char *overlay_text, float scale_min, float scale_max, ImVec2 graph_size, int stride);
	void(*PlotLines2)(const char *label, float(*values_getter)(void *data, int idx), void *data, int values_count, int values_offset, const char *overlay_text, float scale_min, float scale_max, ImVec2 graph_size);
	void(*PlotHistogram)(const char *label, const float *values, int values_count, int values_offset, const char *overlay_text, float scale_min, float scale_max, ImVec2 graph_size, int stride);
	void(*PlotHistogram2)(const char *label, float(*values_getter)(void *data, int idx), void *data, int values_count, int values_offset, const char *overlay_text, float scale_min, float scale_max, ImVec2 graph_size);
	void(*Value)(const char *prefix, bool b);
	void(*Value2)(const char *prefix, int v);
	void(*Value3)(const char *prefix, unsigned int v);
	void(*Value4)(const char *prefix, float v, const char *float_format);
	bool(*BeginMenuBar)();
	void(*EndMenuBar)();
	bool(*BeginMainMenuBar)();
	void(*EndMainMenuBar)();
	bool(*BeginMenu)(const char *label, bool enabled);
	void(*EndMenu)();
	bool(*MenuItem)(const char *label, const char *shortcut, bool selected, bool enabled);
	bool(*MenuItem2)(const char *label, const char *shortcut, bool *p_selected, bool enabled);
	bool(*BeginTooltip)();
	void(*EndTooltip)();
	void(*SetTooltipV)(const char *fmt, va_list args);
	bool(*BeginItemTooltip)();
	void(*SetItemTooltipV)(const char *fmt, va_list args);
	bool(*BeginPopup)(const char *str_id, ImGuiWindowFlags flags);
	bool(*BeginPopupModal)(const char *name, bool *p_open, ImGuiWindowFlags flags);
	void(*EndPopup)();
	void(*OpenPopup)(const char *str_id, ImGuiPopupFlags popup_flags);
	void(*OpenPopup2)(ImGuiID id, ImGuiPopupFlags popup_flags);
	void(*OpenPopupOnItemClick)(const char *str_id, ImGuiPopupFlags popup_flags);
	void(*CloseCurrentPopup)();
	bool(*BeginPopupContextItem)(const char *str_id, ImGuiPopupFlags popup_flags);
	bool(*BeginPopupContextWindow)(const char *str_id, ImGuiPopupFlags popup_flags);
	bool(*BeginPopupContextVoid)(const char *str_id, ImGuiPopupFlags popup_flags);
	bool(*IsPopupOpen)(const char *str_id, ImGuiPopupFlags flags);
	bool(*BeginTable)(const char *str_id, int column, ImGuiTableFlags flags, const ImVec2 &outer_size, float inner_width);
	void(*EndTable)();
	void(*TableNextRow)(ImGuiTableRowFlags row_flags, float min_row_height);
	bool(*TableNextColumn)();
	bool(*TableSetColumnIndex)(int column_n);
	void(*TableSetupColumn)(const char *label, ImGuiTableColumnFlags flags, float init_width_or_weight, ImGuiID user_id);
	void(*TableSetupScrollFreeze)(int cols, int rows);
	void(*TableHeadersRow)();
	void(*TableHeader)(const char *label);
	ImGuiTableSortSpecs *(*TableGetSortSpecs)();
	int(*TableGetColumnCount)();
	int(*TableGetColumnIndex)();
	int(*TableGetRowIndex)();
	const char *(*TableGetColumnName)(int column_n);
	ImGuiTableColumnFlags(*TableGetColumnFlags)(int column_n);
	void(*TableSetColumnEnabled)(int column_n, bool v);
	void(*TableSetBgColor)(ImGuiTableBgTarget target, ImU32 color, int column_n);
	void(*Columns)(int count, const char *id, bool border);
	void(*NextColumn)();
	int(*GetColumnIndex)();
	float(*GetColumnWidth)(int column_index);
	void(*SetColumnWidth)(int column_index, float width);
	float(*GetColumnOffset)(int column_index);
	void(*SetColumnOffset)(int column_index, float offset_x);
	int(*GetColumnsCount)();
	bool(*BeginTabBar)(const char *str_id, ImGuiTabBarFlags flags);
	void(*EndTabBar)();
	bool(*BeginTabItem)(const char *label, bool *p_open, ImGuiTabItemFlags flags);
	void(*EndTabItem)();
	bool(*TabItemButton)(const char *label, ImGuiTabItemFlags flags);
	void(*SetTabItemClosed)(const char *tab_or_docked_window_label);
	ImGuiID(*DockSpace)(ImGuiID id, const ImVec2 &size, ImGuiDockNodeFlags flags, const ImGuiWindowClass *window_class);
	void(*SetNextWindowDockID)(ImGuiID dock_id, ImGuiCond cond);
	void(*SetNextWindowClass)(const ImGuiWindowClass *window_class);
	ImGuiID(*GetWindowDockID)();
	bool(*IsWindowDocked)();
	bool(*BeginDragDropSource)(ImGuiDragDropFlags flags);
	bool(*SetDragDropPayload)(const char *type, const void *data, size_t sz, ImGuiCond cond);
	void(*EndDragDropSource)();
	bool(*BeginDragDropTarget)();
	const ImGuiPayload *(*AcceptDragDropPayload)(const char *type, ImGuiDragDropFlags flags);
	void(*EndDragDropTarget)();
	const ImGuiPayload *(*GetDragDropPayload)();
	void(*BeginDisabled)(bool disabled);
	void(*EndDisabled)();
	void(*PushClipRect)(const ImVec2 &clip_rect_min, const ImVec2 &clip_rect_max, bool intersect_with_current_clip_rect);
	void(*PopClipRect)();
	void(*SetItemDefaultFocus)();
	void(*SetKeyboardFocusHere)(int offset);
	void(*SetNextItemAllowOverlap)();
	bool(*IsItemHovered)(ImGuiHoveredFlags flags);
	bool(*IsItemActive)();
	bool(*IsItemFocused)();
	bool(*IsItemClicked)(ImGuiMouseButton mouse_button);
	bool(*IsItemVisible)();
	bool(*IsItemEdited)();
	bool(*IsItemActivated)();
	bool(*IsItemDeactivated)();
	bool(*IsItemDeactivatedAfterEdit)();
	bool(*IsItemToggledOpen)();
	bool(*IsAnyItemHovered)();
	bool(*IsAnyItemActive)();
	bool(*IsAnyItemFocused)();
	ImGuiID(*GetItemID)();
	ImVec2(*GetItemRectMin)();
	ImVec2(*GetItemRectMax)();
	ImVec2(*GetItemRectSize)();
	imgui_draw_list_18971 *(*GetBackgroundDrawList)();
	imgui_draw_list_18971 *(*GetForegroundDrawList)();
	imgui_draw_list_18971 *(*GetBackgroundDrawList2)(ImGuiViewport *viewport);
	imgui_draw_list_18971 *(*GetForegroundDrawList2)(ImGuiViewport *viewport);
	bool(*IsRectVisible)(const ImVec2 &size);
	bool(*IsRectVisible2)(const ImVec2 &rect_min, const ImVec2 &rect_max);
	double(*GetTime)();
	int(*GetFrameCount)();
	ImDrawListSharedData *(*GetDrawListSharedData)();
	const char *(*GetStyleColorName)(ImGuiCol idx);
	void(*SetStateStorage)(imgui_storage_18971 *storage);
	imgui_storage_18971 *(*GetStateStorage)();
	bool(*BeginChildFrame)(ImGuiID id, const ImVec2 &size, ImGuiWindowFlags flags);
	void(*EndChildFrame)();
	ImVec2(*CalcTextSize)(const char *text, const char *text_end, bool hide_text_after_double_hash, float wrap_width);
	ImVec4(*ColorConvertU32ToFloat4)(ImU32 in);
	ImU32(*ColorConvertFloat4ToU32)(const ImVec4 &in);
	void(*ColorConvertRGBtoHSV)(float r, float g, float b, float &out_h, float &out_s, float &out_v);
	void(*ColorConvertHSVtoRGB)(float h, float s, float v, float &out_r, float &out_g, float &out_b);
	bool(*IsKeyDown)(ImGuiKey key);
	bool(*IsKeyPressed)(ImGuiKey key, bool repeat);
	bool(*IsKeyReleased)(ImGuiKey key);
	int(*GetKeyPressedAmount)(ImGuiKey key, float repeat_delay, float rate);
	const char *(*GetKeyName)(ImGuiKey key);
	void(*SetNextFrameWantCaptureKeyboard)(bool want_capture_keyboard);
	bool(*IsMouseDown)(ImGuiMouseButton button);
	bool(*IsMouseClicked)(ImGuiMouseButton button, bool repeat);
	bool(*IsMouseReleased)(ImGuiMouseButton button);
	bool(*IsMouseDoubleClicked)(ImGuiMouseButton button);
	int(*GetMouseClickedCount)(ImGuiMouseButton button);
	bool(*IsMouseHoveringRect)(const ImVec2 &r_min, const ImVec2 &r_max, bool clip);
	bool(*IsMousePosValid)(const ImVec2 *mouse_pos);
	bool(*IsAnyMouseDown)();
	ImVec2(*GetMousePos)();
	ImVec2(*GetMousePosOnOpeningCurrentPopup)();
	bool(*IsMouseDragging)(ImGuiMouseButton button, float lock_threshold);
	ImVec2(*GetMouseDragDelta)(ImGuiMouseButton button, float lock_threshold);
	void(*ResetMouseDragDelta)(ImGuiMouseButton button);
	ImGuiMouseCursor(*GetMouseCursor)();
	void(*SetMouseCursor)(ImGuiMouseCursor cursor_type);
	void(*SetNextFrameWantCaptureMouse)(bool want_capture_mouse);
	const char *(*GetClipboardText)();
	void(*SetClipboardText)(const char *text);
	void(*SetAllocatorFunctions)(ImGuiMemAllocFunc alloc_func, ImGuiMemFreeFunc free_func, void *user_data);
	void(*GetAllocatorFunctions)(ImGuiMemAllocFunc *p_alloc_func, ImGuiMemFreeFunc *p_free_func, void **p_user_data);
	void *(*MemAlloc)(size_t size);
	void(*MemFree)(void *ptr);
	int(*ImGuiStorage_GetInt)(const imgui_storage_18971 *_this, ImGuiID key, int default_val);
	void(*ImGuiStorage_SetInt)(imgui_storage_18971 *_this, ImGuiID key, int val);
	bool(*ImGuiStorage_GetBool)(const imgui_storage_18971 *_this, ImGuiID key, bool default_val);
	void(*ImGuiStorage_SetBool)(imgui_storage_18971 *_this, ImGuiID key, bool val);
	float(*ImGuiStorage_GetFloat)(const imgui_storage_18971 *_this, ImGuiID key, float default_val);
	void(*ImGuiStorage_SetFloat)(imgui_storage_18971 *_this, ImGuiID key, float val);
	void *(*ImGuiStorage_GetVoidPtr)(const imgui_storage_18971 *_this, ImGuiID key);
	void(*ImGuiStorage_SetVoidPtr)(imgui_storage_18971 *_this, ImGuiID key, void *val);
	int *(*ImGuiStorage_GetIntRef)(imgui_storage_18971 *_this, ImGuiID key, int default_val);
	bool *(*ImGuiStorage_GetBoolRef)(imgui_storage_18971 *_this, ImGuiID key, bool default_val);
	float *(*ImGuiStorage_GetFloatRef)(imgui_storage_18971 *_this, ImGuiID key, float default_val);
	void **(*ImGuiStorage_GetVoidPtrRef)(imgui_storage_18971 *_this, ImGuiID key, void *default_val);
	void(*ImGuiStorage_SetAllInt)(imgui_storage_18971 *_this, int val);
	void(*ImGuiStorage_BuildSortByKey)(imgui_storage_18971 *_this);
	void(*ConstructImGuiListClipper)(imgui_list_clipper_18971 *_this);
	void(*DestructImGuiListClipper)(imgui_list_clipper_18971 *_this);
	void(*ImGuiListClipper_Begin)(imgui_list_clipper_18971 *_this, int items_count, float items_height);
	void(*ImGuiListClipper_End)(imgui_list_clipper_18971 *_this);
	bool(*ImGuiListClipper_Step)(imgui_list_clipper_18971 *_this);
	void(*ImGuiListClipper_IncludeRangeByIndices)(imgui_list_clipper_18971 *_this, int item_begin, int item_end);
	void(*ImDrawList_PushClipRect)(imgui_draw_list_18971 *_this, const ImVec2 &clip_rect_min, const ImVec2 &clip_rect_max, bool intersect_with_current_clip_rect);
	void(*ImDrawList_PushClipRectFullScreen)(imgui_draw_list_18971 *_this);
	void(*ImDrawList_PopClipRect)(imgui_draw_list_18971 *_this);
	void(*ImDrawList_PushTextureID)(imgui_draw_list_18971 *_this, ImTextureID texture_id);
	void(*ImDrawList_PopTextureID)(imgui_draw_list_18971 *_this);
	void(*ImDrawList_AddLine)(imgui_draw_list_18971 *_this, const ImVec2 &p1, const ImVec2 &p2, ImU32 col, float thickness);
	void(*ImDrawList_AddRect)(imgui_draw_list_18971 *_this, const ImVec2 &p_min, const ImVec2 &p_max, ImU32 col, float rounding, ImDrawFlags flags, float thickness);
	void(*ImDrawList_AddRectFilled)(imgui_draw_list_18971 *_this, const ImVec2 &p_min, const ImVec2 &p_max, ImU32 col, float rounding, ImDrawFlags flags);
	void(*ImDrawList_AddRectFilledMultiColor)(imgui_draw_list_18971 *_this, const ImVec2 &p_min, const ImVec2 &p_max, ImU32 col_upr_left, ImU32 col_upr_right, ImU32 col_bot_right, ImU32 col_bot_left);
	void(*ImDrawList_AddQuad)(imgui_draw_list_18971 *_this, const ImVec2 &p1, const ImVec2 &p2, const ImVec2 &p3, const ImVec2 &p4, ImU32 col, float thickness);
	void(*ImDrawList_AddQuadFilled)(imgui_draw_list_18971 *_this, const ImVec2 &p1, const ImVec2 &p2, const ImVec2 &p3, const ImVec2 &p4, ImU32 col);
	void(*ImDrawList_AddTriangle)(imgui_draw_list_18971 *_this, const ImVec2 &p1, const ImVec2 &p2, const ImVec2 &p3, ImU32 col, float thickness);
	void(*ImDrawList_AddTriangleFilled)(imgui_draw_list_18971 *_this, const ImVec2 &p1, const ImVec2 &p2, const ImVec2 &p3, ImU32 col);
	void(*ImDrawList_AddCircle)(imgui_draw_list_18971 *_this, const ImVec2 &center, float radius, ImU32 col, int num_segments, float thickness);
	void(*ImDrawList_AddCircleFilled)(imgui_draw_list_18971 *_this, const ImVec2 &center, float radius, ImU32 col, int num_segments);
	void(*ImDrawList_AddNgon)(imgui_draw_list_18971 *_this, const ImVec2 &center, float radius, ImU32 col, int num_segments, float thickness);
	void(*ImDrawList_AddNgonFilled)(imgui_draw_list_18971 *_this, const ImVec2 &center, float radius, ImU32 col, int num_segments);
	void(*ImDrawList_AddText)(imgui_draw_list_18971 *_this, const ImVec2 &pos, ImU32 col, const char *text_begin, const char *text_end);
	void(*ImDrawList_AddText2)(imgui_draw_list_18971 *_this, const imgui_font_18971 *font, float font_size, const ImVec2 &pos, ImU32 col, const char *text_begin, const char *text_end, float wrap_width, const ImVec4 *cpu_fine_clip_rect);
	void(*ImDrawList_AddPolyline)(imgui_draw_list_18971 *_this, const ImVec2 *points, int num_points, ImU32 col, ImDrawFlags flags, float thickness);
	void(*ImDrawList_AddConvexPolyFilled)(imgui_draw_list_18971 *_this, const ImVec2 *points, int num_points, ImU32 col);
	void(*ImDrawList_AddBezierCubic)(imgui_draw_list_18971 *_this, const ImVec2 &p1, const ImVec2 &p2, const ImVec2 &p3, const ImVec2 &p4, ImU32 col, float thickness, int num_segments);
	void(*ImDrawList_AddBezierQuadratic)(imgui_draw_list_18971 *_this, const ImVec2 &p1, const ImVec2 &p2, const ImVec2 &p3, ImU32 col, float thickness, int num_segments);
	void(*ImDrawList_AddImage)(imgui_draw_list_18971 *_this, ImTextureID user_texture_id, const ImVec2 &p_min, const ImVec2 &p_max, const ImVec2 &uv_min, const ImVec2 &uv_max, ImU32 col);
	void(*ImDrawList_AddImageQuad)(imgui_draw_list_18971 *_this, ImTextureID user_texture_id, const ImVec2 &p1, const ImVec2 &p2, const ImVec2 &p3, const ImVec2 &p4, const ImVec2 &uv1, const ImVec2 &uv2, const ImVec2 &uv3, const ImVec2 &uv4, ImU32 col);
	void(*ImDrawList_AddImageRounded)(imgui_draw_list_18971 *_this, ImTextureID user_texture_id, const ImVec2 &p_min, const ImVec2 &p_max, const ImVec2 &uv_min, const ImVec2 &uv_max, ImU32 col, float rounding, ImDrawFlags flags);
	void(*ImDrawList_PathArcTo)(imgui_draw_list_18971 *_this, const ImVec2 &center, float radius, float a_min, float a_max, int num_segments);
	void(*ImDrawList_PathArcToFast)(imgui_draw_list_18971 *_this, const ImVec2 &center, float radius, int a_min_of_12, int a_max_of_12);
	void(*ImDrawList_PathBezierCubicCurveTo)(imgui_draw_list_18971 *_this, const ImVec2 &p2, const ImVec2 &p3, const ImVec2 &p4, int num_segments);
	void(*ImDrawList_PathBezierQuadraticCurveTo)(imgui_draw_list_18971 *_this, const ImVec2 &p2, const ImVec2 &p3, int num_segments);
	void(*ImDrawList_PathRect)(imgui_draw_list_18971 *_this, const ImVec2 &rect_min, const ImVec2 &rect_max, float rounding, ImDrawFlags flags);
	void(*ImDrawList_AddCallback)(imgui_draw_list_18971 *_this, ImDrawCallback callback, void *callback_data);
	void(*ImDrawList_AddDrawCmd)(imgui_draw_list_18971 *_this);
	imgui_draw_list_18971 *(*ImDrawList_CloneOutput)(const imgui_draw_list_18971 *_this);
	void(*ImDrawList_PrimReserve)(imgui_draw_list_18971 *_this, int idx_count, int vtx_count);
	void(*ImDrawList_PrimUnreserve)(imgui_draw_list_18971 *_this, int idx_count, int vtx_count);
	void(*ImDrawList_PrimRect)(imgui_draw_list_18971 *_this, const ImVec2 &a, const ImVec2 &b, ImU32 col);
	void(*ImDrawList_PrimRectUV)(imgui_draw_list_18971 *_this, const ImVec2 &a, const ImVec2 &b, const ImVec2 &uv_a, const ImVec2 &uv_b, ImU32 col);
	void(*ImDrawList_PrimQuadUV)(imgui_draw_list_18971 *_this, const ImVec2 &a, const ImVec2 &b, const ImVec2 &c, const ImVec2 &d, const ImVec2 &uv_a, const ImVec2 &uv_b, const ImVec2 &uv_c, const ImVec2 &uv_d, ImU32 col);
	void(*ConstructImFont)(imgui_font_18971 *_this);
	void(*DestructImFont)(imgui_font_18971 *_this);
	const ImFontGlyph *(*ImFont_FindGlyph)(const imgui_font_18971 *_this, ImWchar c);
	const ImFontGlyph *(*ImFont_FindGlyphNoFallback)(const imgui_font_18971 *_this, ImWchar c);
	ImVec2(*ImFont_CalcTextSizeA)(const imgui_font_18971 *_this, float size, float max_width, float wrap_width, const char *text_begin, const char *text_end, const char **remaining);
	const char *(*ImFont_CalcWordWrapPositionA)(const imgui_font_18971 *_this, float scale, const char *text, const char *text_end, float wrap_width);
	void(*ImFont_RenderChar)(const imgui_font_18971 *_this, imgui_draw_list_18971 *draw_list, float size, const ImVec2 &pos, ImU32 col, ImWchar c);
	void(*ImFont_RenderText)(const imgui_font_18971 *_this, imgui_draw_list_18971 *draw_list, float size, const ImVec2 &pos, ImU32 col, const ImVec4 &clip_rect, const char *text_begin, const char *text_end, float wrap_width, bool cpu_fine_clip);

};

extern const imgui_function_table_18971 g_imgui_function_table_18971;
