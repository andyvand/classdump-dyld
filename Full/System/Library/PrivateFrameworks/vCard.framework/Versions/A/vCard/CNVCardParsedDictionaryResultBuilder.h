/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/Versions/A/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <vCard/CNVCardParsedResultBuilder.h>

@class NSMutableDictionary, NSString;

@interface CNVCardParsedDictionaryResultBuilder : NSObject <CNVCardParsedResultBuilder> {

	NSMutableDictionary* _dictionaryRep;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)setImageData:(id)arg1 forReference:(id)arg2 clipRects:(id)arg3 ;
-(id)build;
-(id)validCountryCodes;
-(void)setUnknownProperties:(id)arg1 ;
-(char)canSetValueForProperty:(id)arg1 ;
-(char)setValues:(id)arg1 labels:(id)arg2 isPrimaries:(id)arg3 forProperty:(id)arg4 ;
-(id)init;
-(id)valueForProperty:(id)arg1 ;
-(char)setValue:(id)arg1 forProperty:(id)arg2 ;
-(char)setImageData:(id)arg1 ;
@end

