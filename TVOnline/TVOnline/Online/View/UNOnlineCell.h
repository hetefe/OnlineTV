//
//  UNOnlineCell.h
//  TVOnline
//
//  Created by universe on 2016/12/27.
//  Copyright © 2016年 universe. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "OnlineModel.h"
#import "RecommendModel.h"

@interface UNOnlineCell : UICollectionViewCell

@property (nonatomic, strong) OnlineDataModel *model;
@property (nonatomic, strong) RecommendRoomListModel *listModel;

@end
