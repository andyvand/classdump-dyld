/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:08 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/DataDetectors.framework/Versions/A/DataDetectors
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataDetectors/DataDetectors-Structs.h>
#import <DataDetectors/DDAction.h>

@class NSString, NSBundle;

@interface DDMiscAction : DDAction {

	NSString* _controllerClassName;
	NSBundle* _bundle;
	char _actionLoadedSuccessfully;

}
-(char)displaysUI;
-(void)closeUI;
-(id)initWithDict:(id)arg1 bundle:(id)arg2 ;
-(Class)controllerClass;
-(id)rawMenuItemForContext:(id)arg1 ;
-(char)runForResult:(DDResultRef)arg1 context:(id)arg2 ;
-(char)runForTextCheckingResult:(id)arg1 context:(id)arg2 ;
-(char)runForURL:(id)arg1 context:(id)arg2 ;
-(char)_loadActionIfNeeded;
-(id)controllerClassName;
-(char)_runForResult:(DDResultRef)arg1 url:(id)arg2 textCheckingResult:(id)arg3 context:(id)arg4 ;
-(void)dealloc;
-(id)name;
@end

