/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Versions/A/PackageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSData;

@interface PKExtendedAttribute : NSObject {

	NSString* _name;
	NSData* _value;

}

@property (copy) NSString * name;              //@synthesize name=_name - In the implementation block
@property (copy) NSData * value;               //@synthesize value=_value - In the implementation block
-(id)initWithName:(id)arg1 value:(id)arg2 ;
-(char)setOnFileAtPath:(id)arg1 option:(int)arg2 ;
-(void)dealloc;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setValue:(NSData *)arg1 ;
-(NSData *)value;
@end

