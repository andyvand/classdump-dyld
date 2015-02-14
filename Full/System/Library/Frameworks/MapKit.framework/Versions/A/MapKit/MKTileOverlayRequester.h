/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:11 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GEOTileRequester.h>

@class NSMutableArray, NSMutableSet;

@interface MKTileOverlayRequester : GEOTileRequester {

	char _cancelled;
	NSMutableArray* _waiting;
	NSMutableSet* _running;
	NSMutableArray* _errors;

}
+(unsigned)registerOverlay:(id)arg1 ;
+(void)unregisterOverlay:(unsigned)arg1 ;
+(unsigned char)tileProviderIdentifier;
-(void)_doWorkOrFinish;
-(void)_operationFailed:(id)arg1 error:(id)arg2 ;
-(void)_operationFinished:(id)arg1 ;
-(void)dealloc;
-(void)start;
-(void)cancel;
-(char)isRunning;
-(void)_cleanup;
@end

