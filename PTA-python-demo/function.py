import datetime


def weekday(year, month, day):  # 判断某天是星期几
    week_list = ["星期一", "星期二", "星期三", "星期四", "星期五", "星期六", "星期日"]
    return week_list[datetime.date(year, month, day).weekday()]
