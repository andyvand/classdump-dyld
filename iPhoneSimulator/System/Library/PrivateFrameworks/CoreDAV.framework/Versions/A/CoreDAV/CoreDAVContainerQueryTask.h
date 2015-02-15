/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:49 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/Versions/A/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTask.h>

@class NSSet, NSString;

@interface CoreDAVContainerQueryTask : CoreDAVTask {

	NSSet* _searchTerms;
	unsigned long long _searchLimit;
	NSString* _appSpecificNamespace;
	NSString* _appSpecificQueryCommand;
	NSString* _appSpecificDataProp;
	Class _appSpecificDataItemClass;

}

@property (assign,nonatomic) id<CoreDAVContainerQueryTaskDelegate> delegate; 
+(id)_copySearchTermsFromSearchString:(id)arg1 ;
-(void)dealloc;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(id)copyDefaultParserForContentType:(id)arg1 ;
-(id)httpMethod;
-(id)requestBody;
-(id)initWithSearchTerms:(id)arg1 searchLimit:(unsigned long long)arg2 atURL:(id)arg3 appSpecificDataItemClass:(Class)arg4 ;
-(void)addFiltersToXMLData:(id)arg1 ;
-(id)initWithSearchString:(id)arg1 searchLimit:(unsigned long long)arg2 atURL:(id)arg3 appSpecificDataItemClass:(Class)arg4 ;
-(id)_initWithSearchTerms:(id)arg1 searchLimit:(unsigned long long)arg2 atURL:(id)arg3 appSpecificDataItemClass:(Class)arg4 ;
@end

