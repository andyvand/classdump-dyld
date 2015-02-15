/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:13 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <AppKit/NSView.h>
#import <AddressBook/NSMenuDelegate.h>

@class NSPopUpButton, NSArray, ABSearchElementUIController, NSString, NSView, NSTextField;

@interface ABSearchElementView : NSView <NSMenuDelegate> {

	NSPopUpButton* _propertyPopUp;
	NSArray* _widgets;
	ABSearchElementUIController* _controller;
	NSString* _property;
	long long _comparison;
	NSView* withinIntervalView;
	NSTextField* withinTextField;
	NSPopUpButton* withinPopupButton;
	NSView* _entryView;
	long long _userInterfaceLayoutDirection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)orderManager;
+(long long)defaultComparisonForProperty:(id)arg1 ;
-(id)property;
-(id)searchElement;
-(id)initWithFrame:(CGRect)arg1 controller:(id)arg2 userInterfaceLayoutDirection:(long long)arg3 ;
-(void)setProperty:(id)arg1 comparison:(long long)arg2 value:(id)arg3 ;
-(void)propertyChanged:(id)arg1 ;
-(CGRect)propertyPopUpFrame;
-(void)addProperty:(id)arg1 withLocalization:(id)arg2 toMenu:(id)arg3 ;
-(CGRect)textMatchingPopUpFrame;
-(long long)comparison;
-(void)comparisonChanged:(id)arg1 ;
-(CGRect)comparisonPopUpFrame;
-(CGRect)textMatchingFieldFrame;
-(CGRect)dateControlFrame;
-(void)updateWithinDateTense;
-(void)groupChanged:(id)arg1 ;
-(long long)comparisonForProperty:(id)arg1 ;
-(id)comparisonPopUpForProperty:(id)arg1 withSelection:(long long)arg2 ;
-(void)setComparison:(long long)arg1 ;
-(id)entryViewForEntry:(id)arg1 ;
-(void)setWidgets:(id)arg1 ;
-(void)setValue:(id)arg1 withProperty:(id)arg2 comparison:(long long)arg3 entryView:(id)arg4 ;
-(void)updateWithinDateWidgetsWithInterval:(double)arg1 ;
-(void)setGroupOrAccount:(id)arg1 onPopUpButton:(id)arg2 ;
-(long long)junctionForComparison:(long long)arg1 value:(id)arg2 ;
-(char)requiresValue;
-(id)conjoinedElementForProperties:(id)arg1 value:(id)arg2 withComparison:(long long)arg3 ;
-(id)conjoinedElementForProperty:(id)arg1 keys:(id)arg2 value:(id)arg3 withComparison:(long long)arg4 ;
-(id)subvalue;
-(void)textMatchingChanged:(id)arg1 ;
-(void)dateMatchingTypeChanged:(id)arg1 ;
-(void)textFieldChanged:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(long long)userInterfaceLayoutDirection;
-(char)validateMenuItem:(id)arg1 ;
-(void)setUserInterfaceLayoutDirection:(long long)arg1 ;
-(id)value;
@end

