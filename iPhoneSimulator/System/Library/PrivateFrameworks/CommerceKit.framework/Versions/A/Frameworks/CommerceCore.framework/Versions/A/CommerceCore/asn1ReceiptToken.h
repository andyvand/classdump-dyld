/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:03 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CommerceKit.framework/Versions/A/Frameworks/CommerceCore.framework/Versions/A/CommerceCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class asn1Token, NSString;

@interface asn1ReceiptToken : NSObject {

	unsigned long long mType;
	unsigned long long mTypeVersion;
	asn1Token* mContentToken;

}

@property (readonly) unsigned long long type; 
@property (readonly) unsigned long long typeVersion; 
@property (readonly) asn1Token * contentToken; 
@property (readonly) NSString * stringValue; 
@property (readonly) unsigned long long integerValue; 
@property (readonly) char contentIsAnInteger; 
+(id)readFromBuffer:(const char*)arg1 ;
-(void)dealloc;
-(id)description;
-(unsigned long long)integerValue;
-(NSString *)stringValue;
-(unsigned long long)type;
-(char)contentIsAnInteger;
-(asn1Token *)contentToken;
-(id)_initWithType:(unsigned long long)arg1 typeVersion:(unsigned long long)arg2 contentToken:(id)arg3 ;
-(unsigned long long)typeVersion;
@end

