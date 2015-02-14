/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:33 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/IOBluetooth.framework/Versions/A/IOBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <IOBluetooth/IOBluetooth-Structs.h>
@class NSString, NSTimer, IOBluetoothOBEXSession;

@interface OBEXFileTransferServices : NSObject {

	id mOBEXFileGet;
	id mOBEXFilePut;
	id mFolderListingFileRef;
	int mActionCommand;
	int mSavedCommand;
	NSString* mActionArgument1;
	NSString* mActionArgument2;
	NSString* mActionArgument3;
	NSString* mCurrentRemoteDirectory;
	char mActionInProgress;
	char mWeOpenedTheOBEXConnection;
	char mHasTargetHeader;
	id mDelegate;
	char mAbortedByOwner;
	char mWeAreAborting;
	NSTimer* mInactivityTimer;
	IOBluetoothOBEXSession* mOBEXSession;
	unsigned short mMaxPacketLength;
	int mConnectionID;
	id mPUTProgress;
	id mGETProgress;
	void* mReserved1;
	void* mReserved2;

}

@property (assign) id delegate; 
+(id)withOBEXSession:(id)arg1 ;
-(id)currentPath;
-(void)setOBEXSession:(id)arg1 ;
-(void)initForNewAction;
-(void)setActionInProgress:(char)arg1 ;
-(void)initiateAction;
-(void)SessionResponseCallback:(OBEXSessionEvent*)arg1 ;
-(void)startCommand;
-(id)initWithOBEXSession:(id)arg1 ;
-(void)finalizeActionWithError:(int)arg1 itemName:(id)arg2 ;
-(void)inactivityTimerFired:(id)arg1 ;
-(void)setActionArgument1:(id)arg1 ;
-(void)setActionArgument2:(id)arg1 ;
-(void)setActionArgument3:(id)arg1 ;
-(int)connectToFTPService;
-(int)connectToObjectPushService;
-(int)changeCurrentFolderForwardToPath:(id)arg1 ;
-(int)changeCurrentFolderToRoot;
-(int)changeCurrentFolderBackward;
-(int)createFolder:(id)arg1 ;
-(int)retrieveFolderListing;
-(int)sendFile:(id)arg1 ;
-(int)sendData:(id)arg1 type:(id)arg2 name:(id)arg3 ;
-(int)copyRemoteFile:(id)arg1 toLocalPath:(id)arg2 ;
-(int)getDefaultVCard:(id)arg1 ;
-(int)sendSetPathCommandWithDict:(CFDictionaryRef)arg1 andFlags:(unsigned char)arg2 ;
-(int)sendRemoveCommandWithDict:(CFDictionaryRef)arg1 ;
-(int)sendGetListingCommandWithDict:(CFDictionaryRef)arg1 ;
-(void)PutFileHandler:(id)arg1 isEnd:(char)arg2 errorCode:(int)arg3 transferProgress:(id)arg4 ;
-(void)GetFileHandler:(id)arg1 isEnd:(char)arg2 errorCode:(int)arg3 transferProgress:(id)arg4 ;
-(void)OBEXConnectHandler:(OBEXConnectCommandResponseData*)arg1 ;
-(void)OBEXDisconnectHandler:(OBEXDisconnectCommandResponseData*)arg1 ;
-(void)OBEXRemoveItemHandler:(OBEXGetCommandResponseData*)arg1 ;
-(void)OBEXGetFolderListingHandler:(OBEXGetCommandResponseData*)arg1 ;
-(void)OBEXSetPathHandler:(OBEXSetPathCommandResponseData*)arg1 ;
-(void)OBEXAbortHandler:(OBEXAbortCommandResponseData*)arg1 ;
-(void)notifyDelegateOfProgress:(int)arg1 itemName:(id)arg2 ;
-(void)finalizeActionAsync:(id)arg1 ;
-(id)OBEXSession;
-(char)isBusy;
-(int)abort;
-(int)disconnect;
-(int)connect;
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(char)isConnected;
-(id)delegate;
-(int)removeItem:(id)arg1 ;
@end

