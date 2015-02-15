/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:53:10 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ExchangeWebServices/EWSBasePathToElementType.h>

@class NSString;

@interface EWSPathToExtendedFieldType : EWSBasePathToElementType {

	int _DistinguishedPropertySetId;
	long long _PropertyId;
	char _PropertyIdSpecified;
	NSString* _PropertyName;
	NSString* _PropertySetId;
	NSString* _PropertyTag;
	int _PropertyType;

}

@property (assign,nonatomic) int DistinguishedPropertySetId;              //@synthesize DistinguishedPropertySetId=_DistinguishedPropertySetId - In the implementation block
@property (assign,nonatomic) long long PropertyId;                        //@synthesize PropertyId=_PropertyId - In the implementation block
@property (assign,nonatomic) char PropertyIdSpecified;                    //@synthesize PropertyIdSpecified=_PropertyIdSpecified - In the implementation block
@property (nonatomic,copy) NSString * PropertyName;                       //@synthesize PropertyName=_PropertyName - In the implementation block
@property (nonatomic,copy) NSString * PropertySetId;                      //@synthesize PropertySetId=_PropertySetId - In the implementation block
@property (nonatomic,copy) NSString * PropertyTag;                        //@synthesize PropertyTag=_PropertyTag - In the implementation block
@property (assign,nonatomic) int PropertyType;                            //@synthesize PropertyType=_PropertyType - In the implementation block
+(id)definition;
-(int)DistinguishedPropertySetId;
-(long long)PropertyId;
-(char)PropertyIdSpecified;
-(int)PropertyType;
-(NSString *)PropertySetId;
-(void)setDistinguishedPropertySetId:(int)arg1 ;
-(void)setPropertyId:(long long)arg1 ;
-(void)setPropertyIdSpecified:(char)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setPropertyTag:(NSString *)arg1 ;
-(void)setPropertyType:(int)arg1 ;
-(void)setPropertySetId:(NSString *)arg1 ;
-(void)setPropertyName:(NSString *)arg1 ;
-(NSString *)PropertyTag;
-(NSString *)PropertyName;
@end
