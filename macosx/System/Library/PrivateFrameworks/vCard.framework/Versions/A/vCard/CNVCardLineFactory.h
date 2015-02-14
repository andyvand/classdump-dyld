/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/Versions/A/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <vCard/CNVCardLineFactory.h>

@protocol CNVCardLineFactory <NSObject>
@required
-(id)lineWithLiteralValue:(id)arg1;
-(id)versionPlaceholderLine;
-(id)stringLineWithName:(id)arg1 value:(id)arg2;
-(id)arrayLineWithName:(id)arg1 value:(id)arg2;
-(id)arrayLineWithName:(id)arg1 value:(id)arg2 itemSeparator:(id)arg3;
-(id)dataLineWithName:(id)arg1 value:(id)arg2;

@end


@class NSString;

@interface CNVCardLineFactory : NSObject <CNVCardLineFactory>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)version30LineFactory;
+(id)version21LineFactory;
-(id)lineWithLiteralValue:(id)arg1 ;
-(id)versionPlaceholderLine;
-(id)stringLineWithName:(id)arg1 value:(id)arg2 ;
-(id)arrayLineWithName:(id)arg1 value:(id)arg2 ;
-(id)arrayLineWithName:(id)arg1 value:(id)arg2 itemSeparator:(id)arg3 ;
-(id)dataLineWithName:(id)arg1 value:(id)arg2 ;
@end

