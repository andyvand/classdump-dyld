/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:56 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/Versions/A/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CFNetwork/CFNetwork-Structs.h>
@interface NSNetServiceBrowser : NSObject {

	id _netServiceBrowser;
	id _delegate;
	void* _reserved;
	char _includesPeerToPeer;

}

@property (assign) id<NSNetServiceBrowserDelegate> delegate; 
@property (assign) char includesPeerToPeer;                               //@synthesize includesPeerToPeer=_includesPeerToPeer - In the implementation block
-(void)searchForServicesOfType:(id)arg1 inDomain:(id)arg2 ;
-(id)init;
-(void)setDelegate:(id<NSNetServiceBrowserDelegate>)arg1 ;
-(void)finalize;
-(void)dealloc;
-(void)stop;
-(id<NSNetServiceBrowserDelegate>)delegate;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(char)includesPeerToPeer;
-(char)_includesAWDL;
-(void)setIncludesPeerToPeer:(char)arg1 ;
-(void)_setIncludesAWDL:(char)arg1 ;
-(CFNetServiceBrowserRef)_internalNetServiceBrowser;
-(void)searchForBrowsableDomains;
-(void)searchForRegistrationDomains;
-(void)_dispatchCallBack:(void*)arg1 flags:(unsigned long long)arg2 error:(SCD_Struct_NS25)arg3 ;
-(void)searchForAllDomains;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
@end

