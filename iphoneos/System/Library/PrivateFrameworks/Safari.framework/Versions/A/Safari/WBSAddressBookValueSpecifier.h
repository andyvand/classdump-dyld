/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:54 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface WBSAddressBookValueSpecifier : NSObject {

	NSString* _property;
	NSString* _component;
	NSString* _label;

}

@property (nonatomic,readonly) NSString * property;               //@synthesize property=_property - In the implementation block
@property (nonatomic,readonly) NSString * component;              //@synthesize component=_component - In the implementation block
@property (nonatomic,readonly) NSString * label;                  //@synthesize label=_label - In the implementation block
-(NSString *)property;
-(id)initWithProperty:(id)arg1 component:(id)arg2 label:(id)arg3 ;
-(NSString *)component;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)label;
@end

