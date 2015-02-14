/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:07 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <WebKit/NSCopying.h>

@class NSURL, NSArray;

@interface _WKProcessPoolConfiguration : NSObject <NSCopying> {

	RetainPtr<NSURL>* _injectedBundleURL;
	RetainPtr<NSArray>* _cachePartitionedURLSchemes;
	unsigned long long _maximumProcessCount;

}

@property (nonatomic,copy) NSURL * injectedBundleURL; 
@property (assign,nonatomic) unsigned long long maximumProcessCount;              //@synthesize maximumProcessCount=_maximumProcessCount - In the implementation block
@property (nonatomic,copy) NSArray * cachePartitionedURLSchemes; 
-(unsigned long long)maximumProcessCount;
-(void)setMaximumProcessCount:(unsigned long long)arg1 ;
-(NSURL *)injectedBundleURL;
-(void)setInjectedBundleURL:(NSURL *)arg1 ;
-(NSArray *)cachePartitionedURLSchemes;
-(void)setCachePartitionedURLSchemes:(NSArray *)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

