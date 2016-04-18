//
//  TGModalForwardView.h
//  Telegram
//
//  Created by keepcoder on 21.10.15.
//  Copyright © 2015 keepcoder. All rights reserved.
//

#import "TGModalView.h"

@interface TGModalForwardView : TGModalView

@property (nonatomic,weak) MessagesViewController *messagesViewController;

@property (nonatomic,strong) TL_localMessage *messageCaller;


@property (nonatomic,strong) TLUser *user;



@end
