/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:59 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <Foundation/NSFormatter.h>

@interface ABCDRecordNameFormatter : NSFormatter {

	char _showPrefix;
	char _showSuffix;
	char _showCompany;
	char _showFallback;
	char _showNickname;
	char _showCompanyInFallback;
	char _showPhonetic;
	unsigned long long _defaultNameOrder;
	unsigned long long _defaultSortOrder;

}

@property (assign) char showPrefix;                                    //@synthesize showPrefix=_showPrefix - In the implementation block
@property (assign) char showSuffix;                                    //@synthesize showSuffix=_showSuffix - In the implementation block
@property (assign) char showCompany;                                   //@synthesize showCompany=_showCompany - In the implementation block
@property (assign) char showFallback;                                  //@synthesize showFallback=_showFallback - In the implementation block
@property (assign) char showNickname;                                  //@synthesize showNickname=_showNickname - In the implementation block
@property (assign) char showCompanyInFallback;                         //@synthesize showCompanyInFallback=_showCompanyInFallback - In the implementation block
@property (assign) char showPhonetic;                                  //@synthesize showPhonetic=_showPhonetic - In the implementation block
@property (readonly) unsigned long long defaultNameOrder;              //@synthesize defaultNameOrder=_defaultNameOrder - In the implementation block
@property (readonly) unsigned long long defaultSortOrder;              //@synthesize defaultSortOrder=_defaultSortOrder - In the implementation block
+(id)displayNameFormatter;
+(unsigned long long)defaultNameOrderWithUserDefaults:(id)arg1 ;
+(unsigned long long)defaultSortOrderWithUserDefaults:(id)arg1 ;
-(id)stringFromRecord:(id)arg1 ;
-(void)setShowPrefix:(char)arg1 ;
-(void)setShowSuffix:(char)arg1 ;
-(void)setShowNickname:(char)arg1 ;
-(void)setShowCompany:(char)arg1 ;
-(unsigned long long)nameOrderForRecord:(id)arg1 ;
-(id)initWithUserDefaults:(id)arg1 ;
-(void)setShowFallback:(char)arg1 ;
-(void)setShowCompanyInFallback:(char)arg1 ;
-(id)stringFromRecord:(id)arg1 rangeOfSortingSubstring:(NSRange*)arg2 ;
-(char)showPhonetic;
-(void)setShowPhonetic:(char)arg1 ;
-(unsigned long long)defaultNameOrder;
-(char)showPrefix;
-(char)showSuffix;
-(char)showCompany;
-(char)showFallback;
-(char)showNickname;
-(char)showCompanyInFallback;
-(unsigned long long)defaultSortOrder;
-(id)init;
-(id)stringForObjectValue:(id)arg1 ;
@end

