/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:35 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Versions/A/PackageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class PKDistribution;

@interface PKDistributionContainer : NSObject {

	PKDistribution* _distribution;

}
+(id)localizationNamesAtPath:(id)arg1 ;
+(id)_lprojSubpathsInDirectory:(id)arg1 ;
-(id)initWithArchive:(id)arg1 error:(id*)arg2 ;
-(id)stringsDictionary;
-(id)initWithDistributionData:(id)arg1 distributionURL:(id)arg2 error:(id*)arg3 ;
-(id)resourceDataForKey:(id)arg1 returningMIMEType:(id*)arg2 returningUTI:(id*)arg3 ;
-(id)_initWithDistributionData:(id)arg1 distributionURL:(id)arg2 error:(id*)arg3 ;
-(id)_resourceDataForKey:(id)arg1 ;
-(id)_resourceContentType:(id)arg1 forKey:(id)arg2 ;
-(id)initWithPath:(id)arg1 error:(id*)arg2 ;
-(id)localizedStringForKey:(id)arg1 value:(id)arg2 ;
-(id)distribution;
-(void)dealloc;
@end

