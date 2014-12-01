SZCalendarPicker
================

a datepicker with calendar style

![SZCalendarPicker.gif](http://upload-images.jianshu.io/upload_images/112047-b9ba15a524ea10b2.gif)

usage
------
------
- add class floder to your project
- `#import "SZCalendarPicker.h"`
```objc
- (IBAction)showAction:(id)sender
{
    SZCalendarPicker *calendarPicker = [SZCalendarPicker showOnView:self.view];
    calendarPicker.today = [NSDate date];
    calendarPicker.date = calendarPicker.today;
    calendarPicker.frame = CGRectMake(0, 100, self.view.frame.size.width, 352);
    calendarPicker.calendarBlock = ^(NSInteger day, NSInteger month, NSInteger year){
        
        NSLog(@"%i-%i-%i", year,month,day);
    };
}
```

THX
---
---
[@nathanwhy](https://github.com/nathanwhy)] and his demo [HYCalendar](https://github.com/nathanwhy/HYCalendar)
