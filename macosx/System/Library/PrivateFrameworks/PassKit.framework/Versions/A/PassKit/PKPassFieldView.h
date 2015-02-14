/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:46 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PassKit.framework/Versions/A/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <AppKit/NSView.h>

@class NSString, PKPassTextField;

@interface PKPassFieldView : NSView {

	NSString* _key;
	PKPassTextField* _labelField;
	PKPassTextField* _valueField;

}

@property (readonly) NSString * key;                            //@synthesize key=_key - In the implementation block
@property (readonly) PKPassTextField * labelField;              //@synthesize labelField=_labelField - In the implementation block
@property (readonly) PKPassTextField * valueField;              //@synthesize valueField=_valueField - In the implementation block
-(PKPassTextField *)labelField;
-(id)initWithFieldType:(int)arg1 key:(id)arg2 label:(id)arg3 value:(id)arg4 ;
-(PKPassTextField *)valueField;
-(id)_textFieldWithValue:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(NSString *)key;
@end

