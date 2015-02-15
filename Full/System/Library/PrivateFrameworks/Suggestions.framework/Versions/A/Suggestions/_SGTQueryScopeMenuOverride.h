/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Suggestions.framework/Versions/A/Suggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Suggestions/Suggestions-Structs.h>
#import <Suggestions/NSTableViewDataSource.h>
#import <Suggestions/NSTableViewDelegate.h>

@class NSString;

@interface _SGTQueryScopeMenuOverride : NSObject <NSTableViewDataSource, NSTableViewDelegate> {

	SEL _action;
	id _target;
	NSString* _item;
	NSString* _title;
	NSString* _spinnerMessage;
	char _spin;

}

@property (assign) char spin;                                       //@synthesize spin=_spin - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)spin;
-(void)setSpin:(char)arg1 ;
-(void)performAction;
-(void)completionTableView:(id)arg1 mouseUpInRow:(long long)arg2 event:(id)arg3 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4 ;
-(char)tableView:(id)arg1 shouldSelectRow:(long long)arg2 ;
-(double)tableView:(id)arg1 heightOfRow:(long long)arg2 ;
-(void)tableViewSelectionDidChange:(id)arg1 ;
-(void)tableViewSelectionIsChanging:(id)arg1 ;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3 ;
-(char)searchFieldCell:(id)arg1 shouldChangeCancelButtonVisibility:(char)arg2 ;
-(char)completionTableView:(id)arg1 rowIsSeparator:(long long)arg2 ;
-(id)initWithAction:(SEL)arg1 target:(id)arg2 item:(id)arg3 title:(id)arg4 spinnerMessage:(id)arg5 ;
@end

