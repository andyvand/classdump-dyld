/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:43:28 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@interface RefreshITunesMatchDownloadOperation : ISOperation {

	long long _downloadID;

}

@property (readonly) long long downloadIdentifier; 
-(BOOL)_refreshDownload:(id)arg1 error:(id*)arg2 ;
-(id)_newPurchaseForDownload:(id)arg1 ;
-(BOOL)_applyResultsOfOperation:(id)arg1 toDownload:(id)arg2 error:(id*)arg3 ;
-(long long)downloadIdentifier;
-(id)initWithDownloadIdentifier:(long long)arg1 ;
-(void)run;
@end
