//
//  DOHDesignAttributeContentTableView.h
//  DOProgram
//
//  Created by 彩虹蜗牛 on 2018/2/9.
//  Copyright © 2018年 Dolion.Hou. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DOHDesignAttributeContentTableView : UITableView

@property (nonatomic) void(^DOHDesignContentAttributeBlock) (NSInteger modelType);


- (instancetype)initWithFrame:(CGRect)frame style:(UITableViewStyle)style;
@end
