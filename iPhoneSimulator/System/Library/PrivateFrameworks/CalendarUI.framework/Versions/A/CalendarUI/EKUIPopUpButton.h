/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:51 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarUI/CalendarUI-Structs.h>
#import <AppKit/NSPopUpButton.h>

@class NSString, NSMutableDictionary, EKEventViewController;

@interface EKUIPopUpButton : NSPopUpButton {

	NSString* _deemphasizedString;
	NSMutableDictionary* _abbreviatedTitles;
	double _targetWidth;
	EKEventViewController* _eventViewController;

}

@property (retain) NSString * deemphasizedString;                            //@synthesize deemphasizedString=_deemphasizedString - In the implementation block
@property (retain) NSMutableDictionary * abbreviatedTitles;                  //@synthesize abbreviatedTitles=_abbreviatedTitles - In the implementation block
@property (assign) double targetWidth;                                       //@synthesize targetWidth=_targetWidth - In the implementation block
@property (__weak) EKEventViewController * eventViewController;              //@synthesize eventViewController=_eventViewController - In the implementation block
+(void)setupAppearanceForPopUpButton:(id)arg1 withEventViewController:(id)arg2 ;
+(Class)cellClass;
-(EKEventViewController *)eventViewController;
-(id)initWithEventViewController:(id)arg1 ;
-(void)setEventViewController:(EKEventViewController *)arg1 ;
-(void)setDeemphasizedString:(NSString *)arg1 ;
-(void)setAbbreviatedTitles:(NSMutableDictionary *)arg1 ;
-(void)setTargetWidth:(double)arg1 ;
-(NSMutableDictionary *)abbreviatedTitles;
-(NSString *)deemphasizedString;
-(double)targetWidth;
-(CGSize)buttonSize;
-(id)hitTest:(CGPoint)arg1 ;
-(char)canBecomeKeyView;
-(char)selectItemWithTag:(long long)arg1 ;
@end

