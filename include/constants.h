//
// Created by Stepan Didurenko on 05.06.2024.
//

#ifndef INCLUDE_CONSTANTS_H_
#define INCLUDE_CONSTANTS_H_

#include <tgbot/tgbot.h>

#include <regex>
#include <string>

namespace consts {
// TODO(diduk001): проверять регексом в compile-time
constexpr char TOKEN[] = "7041771878:AAGNm1BSBS0g1iedFp6h-7V9d9coHhqvux0";
constexpr char DB_NAME[] = "../chinook.db";
}  // namespace consts
namespace messages {
constexpr char HI[] = "Здарова шершень";
// making
constexpr char discipline_making_new[] = "Вы создаете новую дисциплину";
constexpr char discipline_making_canceled[] = "Создание дисциплины отменено";
constexpr char discipline_is_saved[] = "Дисциплина сохранена в базе данных";
// description
constexpr char discipline_have_no_description[] =
    "В дисциплине не будет описания";
constexpr char discipline_is_correct_description[] =
    "Информация записана правильно?";
// enter
constexpr char discipline_enter_name[] = "Введите название дисциплины";
constexpr char discipline_enter_full_name[] = "Введите ФИ(О) преподавателя";
constexpr char discipline_enter_email[] = "Введите почту преподавателя";
constexpr char discipline_enter_description[] = "Введите описания предмета";
// saved
constexpr char discipline_professor_name_saved[] =
    "Имя преподавателя сохранено";
constexpr char discipline_name_saved[] = "Название дисциплины сохранено";
constexpr char discipline_email_saved[] = "Электронная почта сохранена";
constexpr char discipline_saved[] = "Проверьте правильность данных:";
// wrong
constexpr char discipline_wrong_name_length[] =
    "Неправильная длина дисциплины\nДлина должна быть более: "; // TODO: даделатб
constexpr char discipline_wrong_full_name[] = "Неправильный формат ввода ФИ(О)";
constexpr char discipline_wrong_email[] =
    "Проверьте правильность ввода почты, впишите ее еще раз";
constexpr char discipline_wrong_describe[] =
    "Максимальная длина для описания {}";

constexpr char discipline_what_want_to_do[] = "Что вы хотите сделать?";
}  // namespace messages

namespace db_queries {
constexpr char basic_where_from_customers[] =
    "SELECT FirstName FROM customers WHERE Country=?";
}

namespace regular_expressions {
const std::regex pattern(
    R"(\b[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\.[A-Z|a-z]{2,}\b)");
}

namespace button_names {
constexpr char make_discipline[] = "Создать дисциплину";
constexpr char stop_making_discipline[] = "Прервать создание дисциплины";
constexpr char button_yes[] = "Да";
constexpr char button_no[] = "Нет";
constexpr char dont_add_description[] = "Не добавлять описание";
constexpr char view_disciplines[] = "Посмотреть дисциплины";
constexpr char change_group_settings[] = "Изменить параметры группы";
constexpr char delete_group[] = "Удалить группу";
constexpr char go_back_to_main_menu[] = "Вернуться в главное меню";
constexpr char discipline_info[] = "Информация о дисциплине";
constexpr char evaluate_with_formula[] = "Рассчитать по формуле";
constexpr char elements_of_control[] = "Элементы контроля";
constexpr char change_discipline_settings[] = "Изменить параметры дисциплины";
constexpr char delete_discipline[] = "Удалить дисциплину";
}  // namespace button_names

namespace button_data {
constexpr char make_discipline[] = "make discipline";
constexpr char stop_making_discipline[] = "stop making discipline";
constexpr char discipline_confirmation_yes[] = "discipline confirmed";
constexpr char discipline_confirmation_no[] = "discipline not confirmed";
constexpr char dont_add_description[] = "dont add";
constexpr char view_disciplines[] = "view disciplines";
constexpr char change_group_settings[] = "change group settings";
constexpr char delete_group[] = "delete group";
constexpr char go_back_to_main_menu[] = "go back to main menu";
constexpr char discipline_info[] = "discipline info";
constexpr char evaluate_with_formula[] = "evaluate with formula";
constexpr char elements_of_control[] = "elements of control";
constexpr char change_discipline_settings[] = "change discipline settings";
constexpr char delete_discipline[] = "delete discipline";
}  // namespace button_data

namespace standard_text {
constexpr char description_standard[] = "Отсутствует";
}

namespace lengths {
size_t max_discipline_name_length = 40;
size_t min_discipline_name_length = 1;
size_t minimal_space_count_in_name = 1;
size_t max_description_len = 500;
}  // namespace lengths

namespace keyboards {

TgBot::InlineKeyboardButton::Ptr go_back_to_main_menu(
    new TgBot::InlineKeyboardButton{
        button_names::go_back_to_main_menu,
        {},
        button_data::go_back_to_main_menu,
    });    

TgBot::InlineKeyboardButton::Ptr delete_discipline(
    new TgBot::InlineKeyboardButton{
        button_names::delete_discipline,
        {},
        button_data::delete_discipline,
    });     

TgBot::InlineKeyboardButton::Ptr change_discipline_settings(
    new TgBot::InlineKeyboardButton{
        button_names::change_discipline_settings,
        {},
        button_data::change_discipline_settings,
    }); 

TgBot::InlineKeyboardButton::Ptr elements_of_control(
    new TgBot::InlineKeyboardButton{
        button_names::elements_of_control,
        {},
        button_data::elements_of_control,
    }); 

TgBot::InlineKeyboardButton::Ptr evaluate_with_formula(
    new TgBot::InlineKeyboardButton{
        button_names::evaluate_with_formula,
        {},
        button_data::evaluate_with_formula,
    }); 

TgBot::InlineKeyboardButton::Ptr discipline_info(
    new TgBot::InlineKeyboardButton{
        button_names::discipline_info,
        {},
        button_data::discipline_info,
    });        
const TgBot::InlineKeyboardMarkup::Ptr discipline_actions_keyboard(
    new TgBot::InlineKeyboardMarkup);    
    
TgBot::InlineKeyboardButton::Ptr delete_group(
    new TgBot::InlineKeyboardButton{
        button_names::delete_group,
        {},
        button_data::delete_group,
    });

TgBot::InlineKeyboardButton::Ptr change_group_settings(
    new TgBot::InlineKeyboardButton{
        button_names::change_group_settings,
        {},
        button_data::change_group_settings,
    });
    
TgBot::InlineKeyboardButton::Ptr view_disciplines(
    new TgBot::InlineKeyboardButton{
        button_names::view_disciplines,
        {},
        button_data::view_disciplines,
    });

// making discipline
TgBot::InlineKeyboardButton::Ptr make_discipline(
    new TgBot::InlineKeyboardButton{
        button_names::make_discipline,
        {},
        button_data::make_discipline,
    });
const TgBot::InlineKeyboardMarkup::Ptr making_discipline_keyboard( 
    // я бы переименовал в group_actions_keyboard и в неё засунуть кнопки начиная с delete_group
    new TgBot::InlineKeyboardMarkup);

TgBot::InlineKeyboardButton::Ptr stop_making_discipline( // не нужно вроде как
    new TgBot::InlineKeyboardButton{
        button_names::stop_making_discipline,
        {},
        button_data::stop_making_discipline,
    });
const TgBot::InlineKeyboardMarkup::Ptr stop_making_discipline_keyboard( 
    new TgBot::InlineKeyboardMarkup);

TgBot::InlineKeyboardButton::Ptr discipline_confirmation_yes(
    new TgBot::InlineKeyboardButton{
        button_names::button_yes,
        {},
        button_data::discipline_confirmation_yes,
    });
TgBot::InlineKeyboardButton::Ptr discipline_confirmation_no(
    new TgBot::InlineKeyboardButton{
        button_names::button_no,
        {},
        button_data::discipline_confirmation_no,
    });
const TgBot::InlineKeyboardMarkup::Ptr discipline_confirmation_keyboard(
    new TgBot::InlineKeyboardMarkup);

TgBot::InlineKeyboardButton::Ptr dont_add_description(
    new TgBot::InlineKeyboardButton{
        button_names::dont_add_description,
        {},
        button_data::dont_add_description,
    });
const TgBot::InlineKeyboardMarkup::Ptr dont_add_description_keyboard(
    new TgBot::InlineKeyboardMarkup); 


void init_keyboards() {
  making_discipline_keyboard->inlineKeyboard = {{std::move(make_discipline)}};
  stop_making_discipline_keyboard->inlineKeyboard = {
      {std::move(stop_making_discipline)}};
  discipline_confirmation_keyboard->inlineKeyboard = {
      {std::move(discipline_confirmation_yes),
       std::move(discipline_confirmation_no)}};
  dont_add_description_keyboard->inlineKeyboard = {
      {std::move(dont_add_description)}};
}

}  // namespace keyboards
#endif //INCLUDE_CONSTANTS_H_