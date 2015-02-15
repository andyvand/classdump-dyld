/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:22 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface FI_TCachedAttributeSchema : NSObject {

	NSString* _attributeName;
	NSString* _localizedAttributeName;
	NSString* _localizedAttributeDescription;
	unsigned long long _dataType;
	BOOL _inMenu;

}

@property (retain) NSString * attributeName;                              //@synthesize attributeName=_attributeName - In the implementation block
@property (retain) NSString * localizedAttributeName;                     //@synthesize localizedAttributeName=_localizedAttributeName - In the implementation block
@property (retain) NSString * localizedAttributeDescription;              //@synthesize localizedAttributeDescription=_localizedAttributeDescription - In the implementation block
@property (assign) unsigned long long dataType;                           //@synthesize dataType=_dataType - In the implementation block
@property (assign) BOOL inMenu;                                           //@synthesize inMenu=_inMenu - In the implementation block
-(void)setInMenu:(BOOL)arg1 ;
-(NSString *)localizedAttributeName;
-(BOOL)inMenu;
-(void)setAttributeName:(NSString *)arg1 ;
-(void)setLocalizedAttributeName:(NSString *)arg1 ;
-(void)setLocalizedAttributeDescription:(NSString *)arg1 ;
-(NSString *)localizedAttributeDescription;
-(unsigned long long)dataType;
-(void)setDataType:(unsigned long long)arg1 ;
-(void)dealloc;
-(NSString *)attributeName;
-(id)initWithAttributeName:(id)arg1 ;
@end

