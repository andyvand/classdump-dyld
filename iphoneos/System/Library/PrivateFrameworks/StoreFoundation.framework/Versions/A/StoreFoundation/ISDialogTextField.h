/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/StoreFoundation.framework/Versions/A/StoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface ISDialogTextField : NSObject {

	long long _keyboardType;
	char _secure;
	NSString* _title;
	NSString* _value;

}

@property (assign) long long keyboardType;              //@synthesize keyboardType=_keyboardType - In the implementation block
@property (getter=isSecure) char secure;                //@synthesize secure=_secure - In the implementation block
@property (retain) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (retain) NSString * value;                    //@synthesize value=_value - In the implementation block
+(id)textFieldWithTitle:(id)arg1 ;
-(char)isSecure;
-(long long)keyboardType;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setValue:(NSString *)arg1 ;
-(NSString *)value;
-(void)setKeyboardType:(long long)arg1 ;
-(void)setSecure:(char)arg1 ;
@end

