/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:28:02 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEventEditItem.h>
#import <UIKit/UITextViewDelegate.h>

@class CalendarNotesCell;

@interface EKEventNotesInlineEditItem : EKEventEditItem <UITextViewDelegate> {

	CalendarNotesCell* _cell;

}
-(BOOL)saveAndDismissWithForce:(BOOL)arg1 ;
-(id)cellForSubitemAtIndex:(unsigned)arg1 inSubsection:(unsigned)arg2 ;
-(float)defaultCellHeightForSubitemAtIndex:(unsigned)arg1 inSubsection:(unsigned)arg2 forWidth:(float)arg3 ;
-(BOOL)textViewShouldReturn:(id)arg1 ;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)reset;
-(BOOL)isInline;
-(void).cxx_destruct;
@end
