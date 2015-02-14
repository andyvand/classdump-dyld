/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:49 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MFUIMailbox <NSCopying,NSObject>
@property (assign) int type; 
@property (readonly) char isVisibleFlaggedMailbox; 
@required
-(unsigned long long)numberOfChildren;
-(char)isSmartMailbox;
-(char)isDescendantOfMailboxWithType:(int)arg1;
-(char)isStore;
-(id)extendedDisplayName;
-(unsigned long long)displayCount;
-(id)accountURLString;
-(char)isPlaceholder;
-(char)isVisibleFlaggedMailbox;
-(int)type;
-(void)setType:(int)arg1;
-(id)displayName;
-(id)persistentIdentifier;
-(char)isContainer;
-(id)children;
-(char)hasChildren;
-(id)account;

@end

