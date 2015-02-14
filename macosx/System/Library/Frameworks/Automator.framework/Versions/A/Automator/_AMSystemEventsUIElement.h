/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:58 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/_AMSystemEventsItem.h>

@class NSString, NSArray;

@interface _AMSystemEventsUIElement : _AMSystemEventsItem

@property (copy,readonly) NSString * objectDescription; 
@property (readonly) char enabled; 
@property (copy,readonly) NSArray * entireContents; 
@property (assign) char focused; 
@property (copy,readonly) NSString * help; 
@property (readonly) long long maximumValue; 
@property (readonly) long long minimumValue; 
@property (copy,readonly) NSString * name; 
@property (copy,readonly) NSString * orientation; 
@property (copy) NSArray * position; 
@property (copy,readonly) NSString * role; 
@property (assign) char selected; 
@property (copy) NSArray * size; 
@property (copy,readonly) NSString * subrole; 
@property (copy,readonly) NSString * title; 
@property (assign) long long value; 
-(NSString *)objectDescription;
-(NSArray *)entireContents;
-(id)clickAt:(id)arg1 ;
-(id)browsers;
-(id)busyIndicators;
-(id)checkboxes;
-(id)colorWells;
-(id)comboBoxes;
-(id)growAreas;
-(id)incrementors;
-(id)menuBars;
-(id)menuBarItems;
-(id)menuButtons;
-(id)menuItems;
-(id)outlines;
-(id)popUpButtons;
-(id)progressIndicators;
-(id)radioButtons;
-(id)radioGroups;
-(id)relevanceIndicators;
-(id)scrollAreas;
-(id)scrollBars;
-(id)sliders;
-(id)splitters;
-(id)splitterGroups;
-(id)staticTexts;
-(id)tabGroups;
-(id)tables;
-(id)textAreas;
-(id)textFields;
-(id)toolBars;
-(id)UIElements;
-(id)valueIndicators;
-(char)focused;
-(void)setFocused:(char)arg1 ;
-(NSString *)help;
-(long long)maximumValue;
-(long long)minimumValue;
-(id)actions;
-(char)enabled;
-(char)selected;
-(id)images;
-(id)rows;
-(id)select;
-(NSString *)role;
-(NSString *)subrole;
-(id)groups;
-(id)columns;
-(void)setPosition:(NSArray *)arg1 ;
-(NSArray *)position;
-(NSString *)name;
-(NSString *)title;
-(id)buttons;
-(NSArray *)size;
-(id)windows;
-(id)sheets;
-(void)setSize:(NSArray *)arg1 ;
-(void)setValue:(long long)arg1 ;
-(id)drawers;
-(NSString *)orientation;
-(id)attributes;
-(void)setSelected:(char)arg1 ;
-(id)menus;
-(long long)value;
-(id)lists;
@end

