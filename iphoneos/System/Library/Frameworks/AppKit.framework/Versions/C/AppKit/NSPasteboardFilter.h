/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:18 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface NSPasteboardFilter : NSObject {

	NSString* _intype;
	NSString* _outtype;
	NSDictionary* _spec;

}

@property (copy,readonly) NSString * intype;                //@synthesize intype=_intype - In the implementation block
@property (copy,readonly) NSString * outtype;               //@synthesize outtype=_outtype - In the implementation block
@property (copy,readonly) NSDictionary * spec;              //@synthesize spec=_spec - In the implementation block
+(void)initialize;
+(id)_typesFilterableFromType:(id)arg1 ;
+(id)_conversionChainFrom:(id)arg1 to:(id)arg2 ;
+(id)_typesFilterableToType:(id)arg1 ;
+(id)filterWithFilterSpec:(id)arg1 intype:(id)arg2 outtype:(id)arg3 ;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)intype;
-(id)_computeDataFromData:(id)arg1 ;
-(NSString *)outtype;
-(id)initWithFilterSpec:(id)arg1 intype:(id)arg2 outtype:(id)arg3 ;
-(NSDictionary *)spec;
@end

