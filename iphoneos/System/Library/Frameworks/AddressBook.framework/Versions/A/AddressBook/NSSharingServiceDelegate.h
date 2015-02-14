/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:43 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NSSharingServiceDelegate <NSObject>
@optional
-(void)sharingService:(id)arg1 willShareItems:(id)arg2;
-(void)sharingService:(id)arg1 didFailToShareItems:(id)arg2 error:(id)arg3;
-(void)sharingService:(id)arg1 didShareItems:(id)arg2;
-(CGRect*)sharingService:(id)arg1 sourceFrameOnScreenForShareItem:(id)arg2;
-(id)sharingService:(id)arg1 transitionImageForShareItem:(id)arg2 contentRect:(CGRect*)arg3;
-(id)sharingService:(id)arg1 sourceWindowForShareItems:(id)arg2 sharingContentScope:(long long*)arg3;

@end

