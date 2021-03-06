/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:40 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>

@class NSString, NSImage, NSButton, NSTextField;

@interface NSNavSharedServerController : NSViewController {

	NSString* _statusText;
	NSString* _serverName;
	NSImage* _serverIcon;
	NSString* _userName;
	int _connectionState;
	NSButton* _connectAsButton;
	NSButton* _shareScreenButton;
	NSTextField* _serverNameTextField;
	NSTextField* _connectingTextField;
	char _isBannerView;
	char _isRemoteDisc;
	char _isUsingDisc;
	char _isWaitingForDisc;
	unsigned _watchingFrameChanges : 1;
	unsigned _reserved2 : 31;

}

@property (copy) NSString * serverName;                               //@synthesize serverName=_serverName - In the implementation block
@property (retain) NSImage * serverIcon;                              //@synthesize serverIcon=_serverIcon - In the implementation block
@property (copy) NSString * statusText;                               //@synthesize statusText=_statusText - In the implementation block
@property (assign) char isBannerView;                                 //@synthesize isBannerView=_isBannerView - In the implementation block
@property (getter=isRemoteDisc) char remoteDisc;                      //@synthesize isRemoteDisc=_isRemoteDisc - In the implementation block
@property (getter=isUsingDisc) char usingDisc;                        //@synthesize isUsingDisc=_isUsingDisc - In the implementation block
@property (getter=isWaitingForDisc) char waitingForDisc;              //@synthesize isWaitingForDisc=_isWaitingForDisc - In the implementation block
@property (readonly) NSButton * connectAsButton; 
@property (readonly) NSButton * shareScreenButton; 
@property (copy) NSString * userName;                                 //@synthesize userName=_userName - In the implementation block
@property (assign) int connectionState;                               //@synthesize connectionState=_connectionState - In the implementation block
-(void)dealloc;
-(void)sizeToFit;
-(id)initAsSharedServerView;
-(id)initAsSharedServerBannerView;
-(void)_frameChangedOnText:(id)arg1 ;
-(char)isRemoteDisc;
-(int)connectionState;
-(void)setStatusText:(NSString *)arg1 ;
-(char)isUsingDisc;
-(char)isWaitingForDisc;
-(char)isBannerView;
-(NSButton *)connectAsButton;
-(NSString *)userName;
-(NSString *)statusText;
-(void)setUserName:(NSString *)arg1 ;
-(void)setConnectionState:(int)arg1 ;
-(void)updateStatus;
-(NSButton *)shareScreenButton;
-(void)updateStatusTextForConnectionState:(int)arg1 userName:(id)arg2 ;
-(void)updateConnectAsButtonForConnectionState:(int)arg1 ;
-(NSString *)serverName;
-(void)setServerName:(NSString *)arg1 ;
-(NSImage *)serverIcon;
-(void)setServerIcon:(NSImage *)arg1 ;
-(void)setIsBannerView:(char)arg1 ;
-(void)setRemoteDisc:(char)arg1 ;
-(void)setUsingDisc:(char)arg1 ;
-(void)setWaitingForDisc:(char)arg1 ;
@end

