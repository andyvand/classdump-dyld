/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:12 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableSet;

@interface WBSOpenSearchSchemaFetcher : NSObject {

	NSMutableSet* _openSearchDescriptionURLs;

}
+(id)sharedFetcher;
-(void)fetchOpenSearchDescriptionWithURL:(id)arg1 ;
-(void)_didFinishFetchingOpenSearchDescriptionDocumentWithURL:(id)arg1 ;
@end
