/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:31 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class EWSPathToExtendedFieldType;

@interface EWSExtendedPropertyType : NSObject {

	EWSPathToExtendedFieldType* _ExtendedFieldURI;
	id _Item;

}

@property (nonatomic,retain) EWSPathToExtendedFieldType * ExtendedFieldURI;              //@synthesize ExtendedFieldURI=_ExtendedFieldURI - In the implementation block
@property (nonatomic,retain) id Item;                                                    //@synthesize Item=_Item - In the implementation block
+(id)definition;
-(void)dealloc;
-(id)description;
-(void)setItem:(id)arg1 ;
-(id)Item;
-(EWSPathToExtendedFieldType *)ExtendedFieldURI;
-(void)setExtendedFieldURI:(EWSPathToExtendedFieldType *)arg1 ;
@end

