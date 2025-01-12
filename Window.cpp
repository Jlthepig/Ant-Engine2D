#include "Window.hpp"

#include  <iostream>

void Ant2D::window::SetUpImGuiStyle()
{
	// Ant 2d style from ImThemes
	ImGuiStyle& style = ImGui::GetStyle();

	style.Alpha = 1.0f;
	style.DisabledAlpha = 0.6000000238418579f;
	style.WindowPadding = ImVec2(5.0f, 14.69999980926514f);
	style.WindowRounding = 8.100000381469727f;
	style.WindowBorderSize = 1.0f;
	style.WindowMinSize = ImVec2(20.0f, 20.0f);
	style.WindowTitleAlign = ImVec2(0.0f, 0.5f);
	style.WindowMenuButtonPosition = ImGuiDir_Right;
	style.ChildRounding = 4.099999904632568f;
	style.ChildBorderSize = 1.0f;
	style.PopupRounding = 4.0f;
	style.PopupBorderSize = 1.0f;
	style.FramePadding = ImVec2(20.0f, 4.0f);
	style.FrameRounding = 3.0f;
	style.FrameBorderSize = 1.0f;
	style.ItemSpacing = ImVec2(1.5f, 8.0f);
	style.ItemInnerSpacing = ImVec2(5.0f, 4.0f);
	style.CellPadding = ImVec2(6.0f, 2.0f);
	style.IndentSpacing = 10.0f;
	style.ColumnsMinSpacing = 7.0f;
	style.ScrollbarSize = 10.10000038146973f;
	style.ScrollbarRounding = 20.0f;
	style.GrabMinSize = 14.89999961853027f;
	style.GrabRounding = 5.699999809265137f;
	style.TabRounding = 20.0f;
	style.TabBorderSize = 1.0f;
	style.TabMinWidthForCloseButton = 0.0f;
	style.ColorButtonPosition = ImGuiDir_Left;
	style.ButtonTextAlign = ImVec2(0.0f, 0.5f);
	style.SelectableTextAlign = ImVec2(0.0f, 0.0f);

	style.Colors[ImGuiCol_Text] = ImVec4(1.0f, 1.0f, 1.0f, 1.0f);
	style.Colors[ImGuiCol_TextDisabled] = ImVec4(0.4980392158031464f, 0.4980392158031464f, 0.4980392158031464f, 1.0f);
	style.Colors[ImGuiCol_WindowBg] = ImVec4(0.06437766551971436f, 0.06437701731920242f, 0.06437701731920242f, 0.9399999976158142f);
	style.Colors[ImGuiCol_ChildBg] = ImVec4(9.999999974752427e-07f, 9.999899930335232e-07f, 9.999899930335232e-07f, 0.0f);
	style.Colors[ImGuiCol_PopupBg] = ImVec4(0.0784313753247261f, 0.0784313753247261f, 0.0784313753247261f, 0.9399999976158142f);
	style.Colors[ImGuiCol_Border] = ImVec4(9.999899930335232e-07f, 9.999899930335232e-07f, 9.999999974752427e-07f, 0.5f);
	style.Colors[ImGuiCol_BorderShadow] = ImVec4(9.999999974752427e-07f, 9.999899930335232e-07f, 9.999899930335232e-07f, 0.0f);
	style.Colors[ImGuiCol_FrameBg] = ImVec4(0.2317573428153992f, 0.2317586690187454f, 0.2317596673965454f, 0.5400000214576721f);
	style.Colors[ImGuiCol_FrameBgHovered] = ImVec4(0.4077212512493134f, 0.4077231585979462f, 0.4077253341674805f, 0.4000000059604645f);
	style.Colors[ImGuiCol_FrameBgActive] = ImVec4(0.3948458135128021f, 0.3948484361171722f, 0.3948497772216797f, 0.6700000166893005f);
	style.Colors[ImGuiCol_TitleBg] = ImVec4(9.999999974752427e-07f, 9.999899930335232e-07f, 9.999899930335232e-07f, 1.0f);
	style.Colors[ImGuiCol_TitleBgActive] = ImVec4(0.0f, 0.04471332207322121f, 0.1072961091995239f, 1.0f);
	style.Colors[ImGuiCol_TitleBgCollapsed] = ImVec4(0.3819742202758789f, 0.3819704055786133f, 0.3819704055786133f, 0.5099999904632568f);
	style.Colors[ImGuiCol_MenuBarBg] = ImVec4(0.1416308879852295f, 0.1416294723749161f, 0.1416294723749161f, 1.0f);
	style.Colors[ImGuiCol_ScrollbarBg] = ImVec4(0.01960784383118153f, 0.01960784383118153f, 0.01960784383118153f, 0.5299999713897705f);
	style.Colors[ImGuiCol_ScrollbarGrab] = ImVec4(0.3098039329051971f, 0.3098039329051971f, 0.3098039329051971f, 1.0f);
	style.Colors[ImGuiCol_ScrollbarGrabHovered] = ImVec4(0.407843142747879f, 0.407843142747879f, 0.407843142747879f, 1.0f);
	style.Colors[ImGuiCol_ScrollbarGrabActive] = ImVec4(0.5098039507865906f, 0.5098039507865906f, 0.5098039507865906f, 1.0f);
	style.Colors[ImGuiCol_CheckMark] = ImVec4(0.9999899864196777f, 0.9999945759773254f, 1.0f, 1.0f);
	style.Colors[ImGuiCol_SliderGrab] = ImVec4(0.9999899864196777f, 0.9999943971633911f, 1.0f, 1.0f);
	style.Colors[ImGuiCol_SliderGrabActive] = ImVec4(9.999899930335232e-07f, 9.999945405070321e-07f, 9.999999974752427e-07f, 1.0f);
	style.Colors[ImGuiCol_Button] = ImVec4(9.999899930335232e-07f, 9.999948815675452e-07f, 9.999999974752427e-07f, 0.4000000059604645f);
	style.Colors[ImGuiCol_ButtonHovered] = ImVec4(9.999899930335232e-07f, 9.999947678807075e-07f, 9.999999974752427e-07f, 1.0f);
	style.Colors[ImGuiCol_ButtonActive] = ImVec4(0.0f, 0.08175996690988541f, 0.1587982773780823f, 1.0f);
	style.Colors[ImGuiCol_Header] = ImVec4(9.999899930335232e-07f, 9.999945405070321e-07f, 9.999999974752427e-07f, 0.3100000023841858f);
	style.Colors[ImGuiCol_HeaderHovered] = ImVec4(0.1416294723749161f, 0.1416301131248474f, 0.1416308879852295f, 0.800000011920929f);
	style.Colors[ImGuiCol_HeaderActive] = ImVec4(0.1416294723749161f, 0.1416301131248474f, 0.1416308879852295f, 1.0f);
	style.Colors[ImGuiCol_Separator] = ImVec4(9.999999974752427e-07f, 9.999899930335232e-07f, 9.999899930335232e-07f, 0.5f);
	style.Colors[ImGuiCol_SeparatorHovered] = ImVec4(9.999899930335232e-07f, 9.999946541938698e-07f, 9.999999974752427e-07f, 0.7799999713897705f);
	style.Colors[ImGuiCol_SeparatorActive] = ImVec4(9.999899930335232e-07f, 9.999946541938698e-07f, 9.999999974752427e-07f, 1.0f);
	style.Colors[ImGuiCol_ResizeGrip] = ImVec4(9.999899930335232e-07f, 9.999944268201943e-07f, 9.999999974752427e-07f, 0.2000000029802322f);
	style.Colors[ImGuiCol_ResizeGripHovered] = ImVec4(9.999899930335232e-07f, 9.999946541938698e-07f, 9.999999974752427e-07f, 0.6700000166893005f);
	style.Colors[ImGuiCol_ResizeGripActive] = ImVec4(9.999899930335232e-07f, 9.999945405070321e-07f, 9.999999974752427e-07f, 0.949999988079071f);
	style.Colors[ImGuiCol_Tab] = ImVec4(9.999899930335232e-07f, 9.999944268201943e-07f, 9.999999974752427e-07f, 0.8619999885559082f);
	style.Colors[ImGuiCol_TabHovered] = ImVec4(0.2588235437870026f, 0.5882353186607361f, 0.9764705896377563f, 0.800000011920929f);
	style.Colors[ImGuiCol_TabActive] = ImVec4(0.196078434586525f, 0.407843142747879f, 0.6784313917160034f, 1.0f);
	style.Colors[ImGuiCol_TabUnfocused] = ImVec4(0.06666667014360428f, 0.1019607856869698f, 0.1450980454683304f, 0.9724000096321106f);
	style.Colors[ImGuiCol_TabUnfocusedActive] = ImVec4(0.1333333402872086f, 0.2588235437870026f, 0.4235294163227081f, 1.0f);
	style.Colors[ImGuiCol_PlotLines] = ImVec4(0.0f, 1.0f, 0.08333325386047363f, 1.0f);
	style.Colors[ImGuiCol_PlotLinesHovered] = ImVec4(1.0f, 0.1204819083213806f, 0.0f, 1.0f);
	style.Colors[ImGuiCol_PlotHistogram] = ImVec4(0.0f, 0.3433623313903809f, 1.0f, 1.0f);
	style.Colors[ImGuiCol_PlotHistogramHovered] = ImVec4(1.0f, 0.6000000238418579f, 0.0f, 1.0f);
	style.Colors[ImGuiCol_TableHeaderBg] = ImVec4(9.999899930335232e-07f, 9.999899930335232e-07f, 9.999999974752427e-07f, 1.0f);
	style.Colors[ImGuiCol_TableBorderStrong] = ImVec4(9.999899930335232e-07f, 9.999899930335232e-07f, 9.999999974752427e-07f, 1.0f);
	style.Colors[ImGuiCol_TableBorderLight] = ImVec4(9.999899930335232e-07f, 9.999899930335232e-07f, 9.999999974752427e-07f, 1.0f);
	style.Colors[ImGuiCol_TableRowBg] = ImVec4(9.999999974752427e-07f, 9.999899930335232e-07f, 9.999899930335232e-07f, 0.0f);
	style.Colors[ImGuiCol_TableRowBgAlt] = ImVec4(1.0f, 0.9999899864196777f, 0.9999899864196777f, 0.05999999865889549f);
	style.Colors[ImGuiCol_TextSelectedBg] = ImVec4(0.2588235437870026f, 0.5882353186607361f, 0.9764705896377563f, 0.3499999940395355f);
	style.Colors[ImGuiCol_DragDropTarget] = ImVec4(1.0f, 0.6437768340110779f, 0.0f, 0.8999999761581421f);
	style.Colors[ImGuiCol_NavHighlight] = ImVec4(0.9764705896377563f, 0.2588235437870026f, 0.2588235437870026f, 1.0f);
	style.Colors[ImGuiCol_NavWindowingHighlight] = ImVec4(1.0f, 1.0f, 1.0f, 0.699999988079071f);
	style.Colors[ImGuiCol_NavWindowingDimBg] = ImVec4(0.800000011920929f, 0.800000011920929f, 0.800000011920929f, 0.2000000029802322f);
	style.Colors[ImGuiCol_ModalWindowDimBg] = ImVec4(0.800000011920929f, 0.800000011920929f, 0.800000011920929f, 0.3499999940395355f);
}



