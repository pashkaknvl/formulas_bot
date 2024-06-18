//
// Created by Stepan Didurenko on 05.06.2024.
//

#ifndef INCLUDE_CONSTANTS_H_
#define INCLUDE_CONSTANTS_H_

#include <string>
#include <tgbot/tgbot.h>
#include <vector>

namespace consts {
// TODO(diduk001): проверять регексом в compile-time
constexpr char TOKEN[] = "...";
constexpr char DB_NAME[] = "../chinook.db";
}  // namespace consts

namespace messages {
constexpr char HI[] = "Hi!";
}

namespace keyboards {
// менюшка, появляющаяся при нажатии на кнпоку в меню выбора группы (неизменяемая)
TgBot::InlineKeyboardButton::Ptr subjects_btn(new TgBot::InlineKeyboardButton{"Посмотреть предметы", {}, "view_subjects"}); 
TgBot::InlineKeyboardButton::Ptr change_group_btn(new TgBot::InlineKeyboardButton{"Изменить параметры группы", {}, "change_group"});
std::vector<TgBot::InlineKeyboardButton::Ptr> buttons_GroupActions = {subjects_btn, change_group_btn, delete_group_btn};
TgBot::InlineKeyboardMarkup::Ptr keyboard_GroupActions(new TgBot::InlineKeyboardMarkup{buttons_GroupActions});

// менюшка, появляющаяся при нажатии на кнопку просмотра предметов(изменяемая(кол-во предметов))
TgBot::InlineKeyboardButton::Ptr GoToGroupActions_btn(new TgBot::InlineKeyboardButton{"Назад", {}, "go_to_group_actions"}); 
TgBot::InlineKeyboardButton::Ptr AddSubject_btn(new TgBot::InlineKeyboardButton{"Добавить предмет", {}, "add_subject"}); 
// короче тут надо ещё добавить n-ое количесвто кнопок с названиями предметов, подсосав их из бд и не забыть закинуть их в вектор
std::vector<TgBot::InlineKeyboardButton::Ptr> buttons_ListOfSubjects = {AddSubject_btn, GoToGroupActions_btn};
TgBot::InlineKeyboardMarkup::Ptr keyboard_ViewSubjects(new TgBot::InlineKeyboardMarkup{buttons_ListOfSubjects}); 

// менюшка, появляющаяся при нажатии на кнопку предмета(неизменяемая)
TgBot::InlineKeyboardButton::Ptr Info_btn(new TgBot::InlineKeyboardButton{"Информация о предмете", {}, "show_info"}); 
TgBot::InlineKeyboardButton::Ptr Evaluate_btn(new TgBot::InlineKeyboardButton{"Расчитать по формуле", {}, "evaluate"}); 
TgBot::InlineKeyboardButton::Ptr Elements_btn(new TgBot::InlineKeyboardButton{"Элементы контроля", {}, "elements_subject"}); 
TgBot::InlineKeyboardButton::Ptr ChangeSubject_btn(new TgBot::InlineKeyboardButton{"Изменить параметры", {}, "change_subject"}); 
TgBot::InlineKeyboardButton::Ptr DeleteSubject_btn(new TgBot::InlineKeyboardButton{"Удалить предмет", {}, "delete_subject"}); 
std::vector<TgBot::InlineKeyboardButton::Ptr> buttons_SubjectActions = {Info_btn, Evaluate_btn, ChangeSubject_btn, DeleteSubject_btn};
TgBot::InlineKeyboardMarkup::Ptr keyboard_SubjectActions(new TgBot::InlineKeyboardMarkup{buttons_SubjectActions});


}

namespace db_queries {
constexpr char basic_where_from_customers[] =
    "SELECT FirstName FROM customers WHERE Country=?";
}

#endif  // INCLUDE_CONSTANTS_H_
