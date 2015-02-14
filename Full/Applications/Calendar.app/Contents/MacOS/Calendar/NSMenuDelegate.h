/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:56 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Calendar.app/Contents/MacOS/Calendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NSMenuDelegate <NSObject>
@optional
-(void)menuNeedsUpdate:(id)arg1;
-(long long)numberOfItemsInMenu:(id)arg1;
-(char)menu:(id)arg1 updateItem:(id)arg2 atIndex:(long long)arg3 shouldCancel:(char)arg4;
-(char)menuHasKeyEquivalent:(id)arg1 forEvent:(id)arg2 target:(id*)arg3 action:(SEL*)arg4;
-(void)menuWillOpen:(id)arg1;
-(void)menuDidClose:(id)arg1;
-(void)menu:(id)arg1 willHighlightItem:(id)arg2;
-(CGRect*)confinementRectForMenu:(id)arg1 onScreen:(id)arg2;

@end

