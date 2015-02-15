/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:46 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/InternetAccounts.framework/Versions/A/InternetAccounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSBundle, NSArray;

@interface IASetupPlugin : NSObject {

	NSBundle* _bundle;
	NSArray* _services;

}

@property (retain) NSBundle * bundle;                 //@synthesize bundle=_bundle - In the implementation block
@property (readonly) NSArray * services;              //@synthesize services=_services - In the implementation block
-(id)setupViewControllerForServices:(id)arg1 ;
-(id)initWithBundle:(id)arg1 ;
-(NSArray *)services;
-(void)setBundle:(NSBundle *)arg1 ;
-(NSBundle *)bundle;
@end

