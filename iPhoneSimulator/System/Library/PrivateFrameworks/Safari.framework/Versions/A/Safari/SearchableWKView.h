/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:12 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <WebKit/WKView.h>

@interface SearchableWKView : WKView {

	RefPtr<Safari::SearchableWebContentViewController>* _contentViewController;
	Session* _privateBrowsingSession;

}

@property (nonatomic,readonly) char usesPrivateBrowsing; 
@property (nonatomic,readonly) Session* privateBrowsingSession;              //@synthesize privateBrowsingSession=_privateBrowsingSession - In the implementation block
@property (nonatomic,readonly) CGRect visibleBounds; 
-(char)usesPrivateBrowsing;
-(Session*)privateBrowsingSession;
-(id)initWithFrame:(CGRect)arg1 context:(const Context*)arg2 pageGroup:(const PageGroup*)arg3 relatedToPage:(const Page*)arg4 usePrivateBrowsing:(char)arg5 ;
-(id)initWithFrame:(CGRect)arg1 context:(const Context*)arg2 pageGroup:(const PageGroup*)arg3 relatedToPage:(const Page*)arg4 privateBrowsingSession:(const Session*)arg5 ;
-(void)pageDidClose;
-(PassRefPtr<Safari::SearchableWebContentViewController>*)createContentViewController;
-(CGRect)visibleBounds;
-(void)close;
-(char)isClosed;
-(SearchableWebContentViewController*)contentViewController;
@end
