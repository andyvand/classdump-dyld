/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:33:46 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Graphics/Quartz Composer Plug-Ins/WOTD.plugin/Contents/MacOS/WOTD
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QCPlugIn.h>

@class NSArray, NSString;

@interface WOTDPlugIn : QCPlugIn

@property (assign) unsigned long long inputDictionaryChoice; 
@property (assign) NSArray * outputWordList; 
@property (assign) NSString * outputPressDKeyString; 
@property (assign) NSString * outputRegularFontName; 
@property (assign) NSString * outputBoldFontName; 
+(id)attributes;
+(int)executionMode;
+(id)attributesForPropertyPortWithKey:(id)arg1 ;
+(int)timeMode;
-(id)_extractBodyStringFromXML:(id)arg1 ;
-(id)_lookupWordInNOAD:(id)arg1 sortKey:(id)arg2 pronunciationFormat:(id)arg3 ;
-(id)_prepareDJSEntry:(id)arg1 ;
-(id)_extractHeadwordWithBulletStringFromXML:(id)arg1 ;
-(id)_wordList;
-(id)_currentPronunciationFormat;
-(id)_preapreWordArrayWithNOAD;
-(id)_preapreWordArrayWithDJS;
-(id)_extractPronunciationStringFromXML:(id)arg1 format:(id)arg2 ;
-(char)startExecution:(id)arg1 ;
-(char)execute:(id)arg1 atTime:(double)arg2 withArguments:(id)arg3 ;
@end
