/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:56:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Automator/Get Selected Mail Items 2.action/Contents/MacOS/Get Selected Mail Items 2
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/AMBundleAction.h>

@class NSPopUpButton, NSString;

@interface Get_Selected_Mail_Items_2 : AMBundleAction {

	NSPopUpButton* _itemTypePopUpButton;

}

@property (retain) NSString * itemType; 
-(id)runWithInput:(id)arg1 fromAction:(id)arg2 error:(id*)arg3 ;
-(void)updateParameters;
-(void)parametersUpdated;
-(void)setItemType:(NSString *)arg1 ;
-(void)itemTypePopUpButtonSelectionChanged:(id)arg1 ;
-(void)awakeFromNib;
-(NSString *)itemType;
@end

