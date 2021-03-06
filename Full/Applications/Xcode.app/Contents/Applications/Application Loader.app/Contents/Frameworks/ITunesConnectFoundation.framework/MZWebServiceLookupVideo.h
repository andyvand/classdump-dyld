/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:15:42 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Xcode.app/Contents/Applications/Application Loader.app/Contents/Frameworks/ITunesConnectFoundation.framework/ITunesConnectFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ITunesConnectFoundation/MZLabelServiceClient.h>

@class NSString;

@interface MZWebServiceLookupVideo : MZLabelServiceClient {

	NSString* _providerShortName;
	NSString* _vendorIdentifier;
	char _resultsCached;
	NSString* _videoAirDate;
	NSString* _videoReleaseDate;
	NSString* _videoTitle;
	NSString* _videoType;

}
-(id)generateArguments;
-(id)operationMethod;
-(id)providerShortName;
-(id)vendorIdentifier;
-(void)setProviderShortName:(id)arg1 ;
-(id)initialMessage;
-(id)runningMessage;
-(id)completedMessage;
-(id)processUncancelledSuccessfulResult:(id)arg1 ;
-(void)operationWillStart;
-(void)cacheResults;
-(void)setVendorIdentifier:(id)arg1 ;
-(id)videoTitle;
-(id)videoType;
-(id)videoAirDate;
-(id)videoReleaseDate;
-(void)dealloc;
@end

