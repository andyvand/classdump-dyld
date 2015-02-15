/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:14:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PreferencePanes/ParentalControls.prefPane/Contents/MacOS/ParentalControls
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ParentalControls/ParentalControls-Structs.h>
#import <AppKit/NSTableCellView.h>

@class NSButton, NSString;

@interface FamilyOtherTableViewCell : NSTableCellView {

	NSButton* _enabledCheckbox;
	NSString* _key;

}

@property (assign) NSButton * enabledCheckbox;              //@synthesize enabledCheckbox=_enabledCheckbox - In the implementation block
@property (assign) NSString * key;                          //@synthesize key=_key - In the implementation block
-(NSButton *)enabledCheckbox;
-(void)setEnabledCheckbox:(NSButton *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
@end
