/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/Versions/A/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <vCard/CNVCardSerializationStorage.h>

@class NSMutableString, NSString;

@interface ABvCardStringStorage : NSObject <CNVCardSerializationStorage> {

	NSMutableString* _string;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)storageWithString:(id)arg1 ;
-(id)insertionMarker;
-(unsigned long long)estimatedDataLength;
-(void)insertString:(id)arg1 atMarker:(id)arg2 ;
-(void)appendString:(id)arg1 usingEncoding:(unsigned long long)arg2 ;
-(unsigned long long)currentLength;
-(void)appendFormat:(id)arg1 ;
-(void)appendString:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
@end
