/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:39 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CommerceKit.framework/Versions/A/CommerceKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CommerceKit/CKAccountAuthentication.h>

@class NSTimer, NSMutableData, NSURLConnection;

@interface CKAppleIDAuthentication : CKAccountAuthentication {

	NSTimer* _timeoutTimer;
	NSMutableData* _receivedData;
	NSURLConnection* _urlConnection;

}
-(void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4 ;
-(void)_dictionaryFromXMLNode:(id)arg1 dictionary:(id)arg2 ;
-(void)_addDict:(id)arg1 toData:(id)arg2 withIndent:(long long)arg3 ;
-(id)_convertDictionaryToXMLData:(id)arg1 ;
-(id)_createRequest;
-(id)_convertXMLDataToDictionary:(id)arg1 ;
-(void)stop;
-(char)start;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)_cleanupURLConnection;
@end

